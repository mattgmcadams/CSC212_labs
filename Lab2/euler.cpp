#include <cstring>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>


long double euler1(int n) {
    long double sum = 0;
    long double fact;
    for (int i = 0 ; i <= n ; i ++) {
        fact = 1;
        for (int j = 2 ; j <= i ; j++) {
            fact *= j;
        }
        sum += (1.0 / fact);
    }

    return sum;
}

long double euler2(int n) {
    long double sum = 0;
    long double fact = 1;

    for (int i = 0 ; i <= n ; i++) {
        sum += (1.0 / fact);
        fact *= (i+1);
    }

    return sum;
}

float time_func(uint16_t n, const char *name) {
    long double val;
    unsigned long c_start, c_end;

    if (! strcmp(name, "euler1")) {
        c_start = std::clock();
        val = euler1(n);
        c_end = std::clock();

    }
    else if (! strcmp(name, "euler2")) {
        c_start = std::clock();
        val = euler2(n);
        c_end = std::clock();

    }
    else{
        std::cout << "Invalid function call" << std::endl;
        return 0;

    }

    float output = 1.0 * (c_end - c_start) / CLOCKS_PER_SEC;
    return output;
}


int main(int argc, char**argv) {
    if (argc != 3) {
        std::cout << "Usage: ./euler <n> <alg>\n";
        std::cout << "\t<n>\tn-th term to be calculated\n";
        std::cout << "\t<alg>\talgorithm to be used (euler1 or euler2)\n";
        return 0;
    }

    uint16_t Max_Number = (uint16_t) atoi(argv[1]);

    std::ofstream myfile;

    myfile.open(std::to_string(Max_Number)+ "_" + (char *)argv[2]+".csv");

    myfile << "input" << "," << "time" << '\n';

    for (int i = 0; i <= Max_Number; i++){
        float function_time = time_func(i, argv[2]);
        myfile << i << "," << std::fixed << std::setprecision(4) << function_time<<'\n';

    }
    myfile.close();

    return 0;
}


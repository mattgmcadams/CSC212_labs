#include <iostream>

unsigned long sum(unsigned int n) {
    if (n==0) {
        return 0;
    } else {
        return n + sum(n-1);
    }
}

int main() {
    std::cout << sum(10) << std::endl;
    std::cout << sum(100) << std::endl;
}
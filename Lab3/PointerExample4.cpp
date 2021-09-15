#include <iostream>

/* And once more with a "reference". */

void AddFive(int & ptr);

int main(){
    int my_var = 5;

    // Prints '5'
    std::cout << my_var << std::endl;

    AddFive(my_var);

    // Prints '10'
    std::cout << my_var << std::endl;
}

void AddFive(int & ptr){
    ptr += 5;
}
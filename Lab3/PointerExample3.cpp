#include <iostream>

/* Here is this same code with a "constant pointer". */

void AddFive(int * const ptr);

int main(){
    int my_var = 5;

    // Prints '5'
    std::cout << my_var << std::endl;

    AddFive(&my_var);

    // Prints '10'
    std::cout << my_var << std::endl;
}

void AddFive(int * const ptr){
    *ptr += 5;
}
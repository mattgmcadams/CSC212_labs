#include <iostream>

/* Taking that same concept, we can use a pointer
to modify a variable even if we are out of scope. */

void AddFive(int * ptr);

int main(){
    int my_var = 5;

    // Prints '5'
    std::cout << my_var << std::endl;

    AddFive(&my_var);

    // Prints '10'
    std::cout << my_var << std::endl;
}

void AddFive(int * ptr){
    *ptr += 5;
}
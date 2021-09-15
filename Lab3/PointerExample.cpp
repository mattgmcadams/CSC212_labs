#include <iostream>

/* Here is a brief piece of code that showcases 
a simple usage of a pointer to modify a variable. */

int main(){
    int my_var = 5;

    // Prints 5
    std::cout << my_var << std::endl;

    // Create a "pointer to an integer" called 'ptr'
    int * ptr;

    // Obtain the memory address of 'my_var' and store it into 'ptr'
    ptr = &my_var;

    // De-reference 'ptr' and change the value stored in that memory address (5) to 10
    *ptr = 10;

    // Prints 10
    std::cout << my_var << std::endl;
}
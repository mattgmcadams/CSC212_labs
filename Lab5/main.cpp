#include <stack>
#include <iostream>

#include "stack.h"


int main() {

    std::cout << "-------------------------std::stack-------------------------" << std::endl;
    std::stack<int> s;

    for (int i = 1; i <= 5; i++) {
        s.push(i);
    }

    s.top() -= 1;

    std::cout << "s.top() is now " << s.top() << std::endl;

    std::cout << "Size: " << s.size() << '\n';

    std::cout << "Popping out elements...";
    while (!s.empty()) {
        std::cout << ' ' << s.top();
        s.pop();
    }

    std::cout << std::endl;

    /*--------------------------------------------------------------------------*/
    /*          My stack implementation                                         */
    std::cout << "--------------------------My Stack--------------------------" << std::endl;

    Stack myStack;

    for (int i = 1; i <= 5; i++) {
        myStack.push(i);
    }

    myStack.top() -= 1;

    std::cout << "myStack.top() is now " << myStack.top() << std::endl;

    std::cout << "Size: " << myStack.size() << '\n';

    std::cout << "Popping out elements...";
    while (!myStack.empty()) {
        std::cout << ' ' << myStack.top();
        myStack.pop();
    }

    std::cout << std::endl;


    return 0;

}
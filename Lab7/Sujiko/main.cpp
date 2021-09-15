#include <iostream>


int main(int argc, char* argv[])
{
    std::string f_name(argv[1]);

    Sujiko s(f_name);

    s.solve();

    s.display_board();

    return 0;
}
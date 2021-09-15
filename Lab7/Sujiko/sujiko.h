#include <vector>
#include <string>

class Sujiko {
private:
    const unsigned int EMPTY = 0;
    const unsigned int BOARD_SIZE = 3;
    std::vector<std::vector<unsigned int> >* board;
    std::vector<unsigned int>* hint;

    bool find_empty_location(unsigned int& row, unsigned int& col);
    bool is_valid(int num);

public:
    Sujiko();
    Sujiko(std::string f_name, std::string hint_name);
    ~Sujiko();

    bool solve();
    void display_board();
};
#include 'sujiko.h'

Sujiko::Sujiko() {
    this->board = nullptr;
    this->hint = nullptr;
}

Sujiko::~Sujiko() {
    delete this->board;
    delete this->hint;
}

Sujiko::Sujiko(std::string f_name, std::string hint_name) {
    this->board = new std::vector<std::vector<unsigned int >>(this->BOARD_SIZE, std::vector<unsigned int>(BOARD_SIZE));
    this->hint = new std::vector<unsigned int>(pow(BOARD_SIZE-1,2));

    unsigned int i = 0, j = 0, k=0;

    std::ifstream file(f_name);
    std::string line;

    while(std::getline(file, line)) {
        std::stringstream iss(line);
        unsigned int temp;
        while(iss >> temp) {
            (*this->board)[i][j] = temp;
            j++;
        }
        j = 0;
        i++;
    }
    
    std::ifstream hfile(hint_name);
    std::stringstream hss(hfile);
    unsigned int tmp;
    while(hss >> tmp) {
        (*this->hint)[k] = tmp;
        k++;
    })
}

bool Sujiko::find_empty_location(unsigned int& row, unsigned int& col) {
    for (row = 0; row < this->BOARD_SIZE; row++) {
        for (col = 0; col < this->BOARD_SIZE; col++) {
            if ((*this->board)[row][col] == 0) { return true; }
        }
    }
    return false;
}

bool Sujiko::is_valid(int num) {
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            if ((*this->board)[row][col] == num) { return true; }
        }
    }
    return false;
}

void Sujiko::display_board(){
    for (unsigned int i = 0; i < this->BOARD_SIZE; i++) {
        for (unsigned int j = 0; j < this->BOARD_SIZE; j++){
            std::cout << (*this->board)[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
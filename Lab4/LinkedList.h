#include "Node.h"
#include <vector>
#include <string>

class LinkedList{
    private:
        Node* head;
        int size;
        
    public:
        LinkedList(); //this->head = nullptr;
        LinkedList(int data);
        LinkedList(std::vector,int. vec);
        
        void push_front(int data);
        void push_back(int data);
        void insert(int data, int idx);
        void remove(int data);
        int get_size();
        std::string to_string()
        //etc
};
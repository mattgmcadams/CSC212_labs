#include "Node.h"
#include "LinkedList.h"
#include <vector>
#include <string>

LinkedList::LinkedList(){
    this->head = nullptr;
    this->size = 0;
}
LinkedList::LinkedList(int data){
    this->head = new Node*(data);
    this->size = 1;
}
LinkedList::LinkedList(std::vector<int> vec){
    
}

void LinkedList::push_front(int data){
    Node nw = new Node(data);
    Node* temp = this->head;
    this->head = &newHead;
    if (this.size <= 0){
        nw.next = nullptr;
        break;
    }
    nw.next = temp;
    this->size++;
}
void LinkedList::push_back(int data){
    
}
void LinkedList::insert(int data, int idx){
    
}
void LinkedList::remove(int data){
    
}
int LinkedList::get_size(){
    return size;
}
std::string LinkedList::to_string(){
    Node* itr = this->head;
    
    while (itr){
        std::cout << itr->data << " ";
        itr = itr.next;
    }
    std::cout << std::endl;
}
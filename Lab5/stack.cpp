#include "stack.h"
#include <cstddef>



Stack::Stack() {
    this->head = nullptr;
    this->_size = 0;
}

Stack::~Stack() {
    Node* p = head;

    while (head != nullptr) {
        head = head->next;
        delete p;
        p = head;
    }
}

void Stack::push(int data) {
    if (head == nullptr) {
        head = new Node(data);
    }
    else {
        head = new Node(data, head);
    }
    _size++;
}

void Stack::pop() {
    Node* p = head;
    if (head != nullptr) {
        head = head->next;
        p->next = nullptr;
        delete p;
        _size--;
    }
    
}

int& Stack::top() {
    return head->data;

}

int Stack::size() {
    return _size;
}

bool Stack::empty() {
    return _size == 0;
}
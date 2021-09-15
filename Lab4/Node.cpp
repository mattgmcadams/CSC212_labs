#include "Node.h"

Node::Node(){
    this->next = NULL;
}
Node::Node(int data){
    this->data = data;
    this->next = NULL;
}
Node::Node(int data, Node* next){
    this->data = data;
    this->next = next;
}
#include "node.h"

class Stack{
	private:
		Node* head;
		int _size;
	public:
		Stack();
		~Stack();
		void push(int data);
		void pop();
		int& top();
		int size();
		bool empty();
};
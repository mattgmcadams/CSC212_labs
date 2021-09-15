class Node{
    private:
        int data;
        Node* next;

        friend class Stack;
    public:
        Node();
        ~Node();
        Node(int data);
        Node(int data, Node* next);
};


class Node{
    private:
        int data;
        Node* next;

        friend class LinkedList;
    public:
        Node();
        Node(int data);
        Node(int data, Node* next);
};
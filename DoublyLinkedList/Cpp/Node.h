/*
 * The Node class definition is used to hold integers and 
 * references for the purpose of building single and doubly 
 * linked lists. 
 */

#include <string>

class Node {
    public:
        Node();
        Node(int);
        std::string toString();
        int getData();
        Node* getNext();
        Node* getPrev();
        void setData(int);
        void setNext(Node*);
        void setPrev(Node*);

    private:
        int data;
        Node* next;
        Node* prev;
};

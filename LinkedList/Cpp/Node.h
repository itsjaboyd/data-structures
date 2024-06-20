/*
 * The Node class definition is used to hold integers and 
 * references for the purpose of building single and doubly 
 * linked lists. 
 */

#include <string>

class Node {
    public:
        Node(int);
        std::string toString();
        int getData();
        void setData(int);
        Node* getNext();
        void setNext(Node*);

    private:
        int data;
        Node* next;
};

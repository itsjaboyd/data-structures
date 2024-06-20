/*
 * The Linked List data structure contains a chained list of 
 * nodes that contain data and are connected by pointers 
 * (multiple pointers for prev/next in the case of doubly 
 * linked lists). Typical linked list operations include 
 * search, insert, and delete. isEmpty() applies, but linked 
 * lists are only full until no more memory is available.
 */

#include <string>
#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        std::string toString();
        int getSize();
        Node* getHead();
        Node* getTail();

        void setHead(Node*);
        void setTail(Node*);

        bool isEmpty();

        bool search(int); 
        void insert(Node*);
        bool remove(int);
    private:
        Node* head;
        Node* tail;
};

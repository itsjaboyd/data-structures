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

class DoublyLinkedList {
    public:
        DoublyLinkedList();
        std::string toString();
        int getSize();
        Node* getNil();

        bool isEmpty();
        bool search(int); 
        void insert(Node*);
        bool remove(int);

    private:
        Node* nil;
};

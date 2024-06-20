/*
 * Implementation of LinkedList.h, note that c++ already has 
 * a LinkedList data structure that should be explored as well.
 */

#include <iostream>
#include <string>
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = NULL;
    tail = NULL;
}

std::string LinkedList::toString() {
    //build a string representing the sequence of nodes

    std::string listed = "";
    Node* temp = getHead();
    if (temp == NULL) {
        return "NULL";
    }
    while (temp != NULL) {
        listed += temp->toString() + " -> ";
        temp = temp->getNext();
    }
    listed += "NULL";
    return listed;
}

int LinkedList::getSize() {
    //get the total number of nodes in the list

    if (isEmpty()) {return 0;}
    int nodes = 0;
    Node* temp = getHead();
    while (temp != NULL) {
        nodes++;
        temp = temp->getNext();
    }
    return nodes;
}

Node* LinkedList::getHead() {
    return head;
}

Node* LinkedList::getTail() {
    return tail;
}

void LinkedList::setHead(Node* newHead) {
    head = newHead;
}

void LinkedList::setTail(Node* newTail) {
    tail = newTail;
}

bool LinkedList::isEmpty() {
    return getHead() == NULL;
}

bool LinkedList::search(int searchData) {
    //return true if the node data was found in the list

    if (isEmpty()) {return false;}
    Node* temp = getHead();
    while (temp != NULL) {
        if (temp->getData() == searchData) {
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

void LinkedList::insert(Node* insertNode) {
    //insert a new node at the head of the list

    insertNode->setNext(head);
    setHead(insertNode);
    if (getHead()->getNext() == NULL) {
        setTail(insertNode);
    }
}

bool LinkedList::remove(int removeData) {
    //remove a node if present in the list

    if (isEmpty()) {return false;}
    if (getHead()->getData() == removeData) {
        setHead(getHead()->getNext());
        return true;
    }

    Node* temp = getHead();
    bool deleted = false;
    bool isTail = false;
    while (temp->getNext() != NULL and !deleted) {
        if (temp->getNext()->getData() == removeData) {
            if (temp->getNext() == getTail()) {
                isTail = true;
                setTail(temp);
            }
            temp->setNext(temp->getNext()->getNext());
            deleted = true;
        }
        if (!isTail and !deleted) {
            temp = temp->getNext();
        }
    }
    return deleted;
}

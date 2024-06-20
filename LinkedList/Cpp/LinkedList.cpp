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
    return "";
}

int LinkedList::getSize() {
    return 0;
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
    Node* temp = getHead();
    if (temp == NULL) {
        return false;
    }
    while (temp->getNext() != NULL) {
        if (temp->getData() == searchData) {
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

void LinkedList::insert(Node* insertNode) {
    insertNode->setNext(head);
    setHead(insertNode);
}

bool LinkedList::remove(int removeData) {
    return true;
}

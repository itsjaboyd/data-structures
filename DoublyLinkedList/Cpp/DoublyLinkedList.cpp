/*
 * Implementation of DoublyLinkedList.h, note that c++ already has 
 * a DoublyLinkedList data structure that should be explored as well.
 */

#include <iostream>
#include <string>
#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
    nil = new Node(-1);
}

std::string DoublyLinkedList::toString() {
    //build a string representing the sequence of nodes

    std::string listed = "";
    Node* temp = getNil()->getNext();
    if (temp == NULL) {
        return "NULL";
    }
    //loop through the list back to nil and add nodes
    while (temp != getNil()) {
        listed += temp->toString() + " -> ";
        temp = temp->getNext();
    }
    listed += "NULL";
    return listed;
}

int DoublyLinkedList::getSize() {
    //get the total number of nodes in the list

    // an empty list's size is always 0
    if (isEmpty()) {
        return 0;
    }
    //loop through the list until back at nil for a node count
    int nodes = 0;
    Node* temp = getNil()->getNext();
    while (temp != getNil()) {
        nodes++;
        temp = temp->getNext();
    }
    return nodes;
}

Node* DoublyLinkedList::getNil() {
    return nil;
}

bool DoublyLinkedList::isEmpty() {
    return getNil()->getNext() == NULL;
}

bool DoublyLinkedList::search(int searchData) {
    //return true if the node data was found in the list

    //can't find a node if the list is empty
    if (isEmpty()) {
        return false;
    }
    //loop through the whole list until the node is found
    Node* temp = getNil()->getNext();
    while (temp != getNil()) {
        if (temp->getData() == searchData) {
            return true;
        }
        temp = temp->getNext();
    }
    return false;
}

void DoublyLinkedList::insert(Node* insertNode) {
    //insert a new node at the head of the list

    //if the list is empty place the new node at the head
    if (isEmpty()) {
        insertNode->setNext(getNil());
        getNil()->setPrev(insertNode);
        getNil()->setNext(insertNode);
        return;
    }

    //otherwise set the head and set its prev/next appropriately
    insertNode->setNext(getNil()->getNext());
    getNil()->getNext()->setPrev(insertNode);
    getNil()->setNext(insertNode);
}

bool DoublyLinkedList::remove(int removeData) {
    //remove a node if present in the list

    //can't remove a node if the list is empty
    if (isEmpty()) {
        return false;
    }
    //if the head of the list is the removal just remove the head
    if (getNil()->getNext()->getData() == removeData) {
        getNil()->setNext(getNil()->getNext()->getNext());
        return true;
    }
    //if the removal is the tail, then remove it and set its prev to nil
    if (getNil()->getPrev()->getData() == removeData) {
        getNil()->setPrev(getNil()->getPrev()->getPrev());
        getNil()->getPrev()->setNext(getNil());
        return true;
    }

    //classic middle of the list removal, take out the middle node
    Node* temp = getNil()->getNext();
    bool deleted = false;
    while (temp != getNil() && !deleted) {
        if (temp->getData() == removeData) {
            temp->getPrev()->setNext(temp->getNext());
            temp->getNext()->setPrev(temp->getPrev());
            deleted = true;
        }
        temp = temp->getNext();
    }
    return deleted;
}

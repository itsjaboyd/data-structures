// Node class implementation to use in single and doubly linked lists.

#include <iostream>
#include "Node.h"
#include <string>

Node::Node() {
    setData(0);
    setNext(nullptr);
    setPrev(nullptr);
}

Node::Node(int data) {
    setData(data);
    setNext(nullptr);
    setPrev(nullptr);
}

std::string Node::toString() {
    return "Node(" + std::to_string(getData()) + ")";
}

int Node::getData() {
    return data;
}

Node* Node::getNext() {
    return next;
}

Node* Node::getPrev() {
    return prev;
}

void Node::setData(int newData) {
    data = newData;
}

void Node::setNext(Node* newNext) {
    next = newNext;
}

void Node::setPrev(Node* newPrev) {
    prev = newPrev;
}


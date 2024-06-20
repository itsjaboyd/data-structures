// Node class implementation to use in single and doubly linked lists.

#include <iostream>
#include "Node.h"
#include <string>

Node::Node(int data) {
    setData(data);
    setNext(nullptr);
}

std::string Node::toString() {
    return "Node(" + std::to_string(getData()) + ")";

}

int Node::getData() {
    return data;
}

void Node::setData(int newData) {
    data = newData;
}

Node* Node::getNext() {
    return next;
}

void Node::setNext(Node* newNext) {
    next = newNext;
}


/**
 * Implementation of Stack.h using a vector for dynamically 
 * increasing the size as the user desires or needs. Note 
 * that C++ already has a Stack data structure implemented 
 * that should be explored as well.
 */

#include "Stack.h"
#include <string>
#include <stdexcept>

Stack::Stack(int size) {
    setMaxSize(size);
}

void Stack::setMaxSize(int size) {
    maxSize = size;
}

int Stack::getMaxSize() {
    return maxSize;
}

int Stack::getSize() {
    return stack.size();
}

std::vector<int> Stack::getStack() {
    return stack;
}

void Stack::push(int element) {
    if (isFull()) {
        throw std::length_error("Cannot push as stack is full.");
    }
    stack.push_back(element);
}

int Stack::top() {
    return stack.back();
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::length_error("Cannot pop as stack is empty.");
    }
    int popped = top();
    stack.pop_back();
    return popped;
}

std::string Stack::toString() {
    std::string output;
    for (int i = 0; i < getSize(); i++) {
        output += " " + std::to_string(stack[i]);
    }
    return output;
}

bool Stack::isEmpty() {
    return getSize() == 0;
}

bool Stack::isFull() {
    return getSize() >= maxSize;
}

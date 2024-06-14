/**
 * Implementation of Queue.h using a vector for dynamically 
 * increasing the size as the user desires. Note that C++ 
 * already has a Queue data structure implemented that should 
 * be explored for real world use as well.
 */

#include "Queue.h"
#include <string>

Queue::Queue(int size) {
    setMaxSize(size);
}

std::string Queue::toString() {
    std::string output;
    for (int i = 0; i< getSize(); i++) {
        output += " " + std::to_string(queue[i]);
    }
    return output;
}

int Queue::getMaxSize() {
    return maxSize;
}

int Queue::getSize() {
    return queue.size();
}

int Queue::getTail() {
    return tail;
}

std::vector<int> Queue::getQueue() {
    return queue;
}

void Queue::setMaxSize(int size) {
    maxSize = size;
}

void Queue::setTail(int index) {
    tail = index;
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw std::length_error("Cannot enqueue as queue is full.");
    }
    if (isEmpty()) {
        setTail(0);
    } else {
        int newTail = getTail() + 1;
        setTail(newTail);
    }
    queue.push_back(item);
}

int Queue::dequeue() {
    if (isEmpty()) {
        throw std::length_error("Cannot dequeue as queue is empty.");
    }
    int newTail = getTail() - 1;
    setTail(newTail);
    std::vector<int>::iterator beginIterator = queue.begin();
    int dequeued = queue.front();
    queue.erase(beginIterator);
    return dequeued;
}

int Queue::front() {
    if (isEmpty()) {
        throw std::length_error("Cannot front as queue is empty.");
    }
    return queue.front();
}

int Queue::rear() {
    if (isEmpty()) {
        throw std::length_error("Cannot reaer as queue is empty.");
    }
    return queue.at(tail);
}

bool Queue::isEmpty() {
    return getSize() <= 0;
}

bool Queue::isFull() {
    return getSize() >= maxSize;
}















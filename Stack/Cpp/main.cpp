#include <iostream>
#include "Stack.h"

using std::cout;
using std::endl;

int main() {
    Stack stack;
    cout << "Stack is empty: " << stack.isEmpty() << " with maxSize: " << stack.getMaxSize() << endl;

    stack.push(0);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    cout << "Stack is empty: " << stack.isEmpty() << " with size: " << stack.getSize() << endl;
    cout << "Stack top: " << stack.top() << endl;

    int popped = stack.pop();
    cout << "Stack popped: " << stack.toString() << endl;

    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    cout << "Stack is full: " << stack.isFull() << endl;

    return 0;
}

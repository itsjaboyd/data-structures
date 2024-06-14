#include <iostream>
#include "Queue.h"

using std::cout;
using std::endl;

int main() {
    Queue queue;
    cout << "Queue is empty: " << queue.isEmpty() << " with maxSize: " << queue.getMaxSize() << endl;

    queue.enqueue(0);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    cout << "Queue is empty: " << queue.isEmpty() << " with size: " << queue.getSize() << endl;
    cout << "Queue front: " << queue.front() << " and rear: " << queue.rear() << endl;

    int dequeued = queue.dequeue();
    cout << "Queue dequeued: " << queue.toString() << endl;

    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);
    queue.enqueue(7);
    queue.enqueue(8);
    queue.enqueue(9);
    cout << "Queue is full: " << queue.isFull() << endl;

    return 0;
}

/**
 * The Queue data structure holds data and operates in a First-In-
 * First-Out (FIFO) linear manner. Typical operations include the 
 * dequeue() and enqueue() methods to add remove from the head and 
 * add to the tail with classic top() and pop() and determiners 
 * for full or empty status.
 */

#include <vector>
#include <string>

class Queue {
    public:
        Queue(int=10);
        std::string toString();
        int getMaxSize();
        int getSize();
        int getTail();
        std::vector<int> getQueue();

        void setMaxSize(int);
        void setTail(int);

        void enqueue(int);
        int dequeue();
        int front();
        int rear();

        bool isEmpty();
        bool isFull();

    private:
        std::vector<int> queue;
        int maxSize;
        int tail; 
};

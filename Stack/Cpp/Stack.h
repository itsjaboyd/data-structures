/**
 * The Stack is a linear data structure holds data and operates 
 * in a LIFO (Last-In-First-Out) or FILO (First-In-Last-Out) 
 * manner. Typical operations include push() data onto the stack, 
 * top() to take a look at the top element, pop() to remove and 
 * return the top element, and stack determiners for full/empty.
 */

#include <vector>
#include <string>

class Stack {
    public:
        Stack(int=10);
        void setMaxSize(int);
        int getMaxSize();
        int getSize();
        std::vector<int> getStack();

        // classic stack methods        
        void push(int);
        int top();
        int pop();
        std::string toString();
        

        // classic stack determiners
        bool isEmpty();
        bool isFull();

    private:
        std::vector<int> stack;
        int maxSize;
};

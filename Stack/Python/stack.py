"""
    The stack data structure holds and releases data through a 
    Last-In-First-Out (LIFO) or First-In-Last-Out (FILO) linear 
    manner. Typical operations are performed at the front or 
    rear of this data structure, such as popping or pushing.
"""

class Stack():
    def __init__(self, size=10):
        self.stack = []
        self.size = size

    def __str__(self):
        return "Stack: {}".format(self.stack)

    def push(self, item):
        if self.isFull():
            raise MemoryError("Cannot push as stack is full.")
        self.stack.append(item)
    
    def pop(self):
        if self.isEmpty():
            raise KeyError("Cannot pop as stack is empty.")
        return self.stack.pop()

    def top(self):
        if self.isEmpty():
            raise KeyError("Cannot top as stack is empty.")
        return self.stack[-1]

    def isFull(self):
        return len(self.stack) >= self.size

    def isEmpty(self):
        return len(self.stack) == 0

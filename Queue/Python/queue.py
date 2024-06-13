"""
    The queue data structure holds and releases data through 
    a First-In-First-Out linear manner. Typical operations 
    are enqueueing data at the tail, and dequeueing data at 
    the head of the structure. 
"""

class Queue():
    def __init__(self, size=10):
        self.queue = []
        self.size = size
        self.tail = 0

    def __str__(self):
        return "Queue: {}".format(self.queue)

    def enqueue(self, item):
        if self.isFull():
            raise MemoryError("Cannot enqueue as queue is full.")
        self.tail = 0 if self.isEmpty() else self.tail + 1
        self.queue.append(item)

    def dequeue(self):
        if self.isEmpty():
            raise KeyError("Cannot dequeue as queue is empty.")
        self.tail -= 1
        return self.queue.pop(0)

    def front(self):
        if self.isEmpty():
            raise KeyError("Cannot front as queue is empty.")
        return self.queue[0]

    def rear(self):
        if self.isEmpty():
            raise KeyError("Cannot rear as queue is empty.")
        return self.queue[self.tail]

    def isFull(self):
        return len(self.queue) >= self.size

    def isEmpty(self):
        return len(self.queue) == 0

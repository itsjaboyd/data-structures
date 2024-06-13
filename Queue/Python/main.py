from queue import Queue

def main():
    queue = Queue()
    print("Initial queue empty: {}".format(queue.isEmpty()))

    fruits = ["apple", "orange", "banana", "strawberry", "lemon"]
    for fruit in fruits:
        queue.enqueue(fruit)

    print("Fruit queue is empty: {}".format(queue.isEmpty()))
    print("Fruit queue front: {}".format(queue.front()))
    print("fruit queue rear: {}".format(queue.rear()))

    strawberry = queue.dequeue()
    print("Fruit queue after dequeue: {}".format(queue))

    fruits = ["grape", "plum", "mango", "lemon", "kiwi", "cherry"]
    for fruit in fruits:
        queue.enqueue(fruit)

    print("Fruit queue is full: {}".format(queue.isFull()))
    
if __name__ == "__main__":
    main()

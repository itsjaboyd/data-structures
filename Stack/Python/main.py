from stack import Stack

def main():
    stack = Stack()
    print("Initial stack empty: {}".format(stack.isEmpty()))

    fruits = ["apple", "orange", "banana", "strawberry", "lemon"]
    for fruit in fruits:
        stack.push(fruit)

    print("Fruit stack is empty: {}".format(stack.isEmpty()))
    print("Fruit stack top: {}".format(stack.top()))

    strawberry = stack.pop()
    print("Fruit stack after pop: {}".format(stack))

    fruits = ["grape", "plum", "mango", "lemon", "kiwi", "cherry"]
    for fruit in fruits:
        stack.push(fruit)

    print("Fruit stack is full: {}".format(stack.isFull()))
    
if __name__ == "__main__":
    main()

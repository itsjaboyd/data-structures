from doublylinkedlist import DoublyLinkedList

def main():
    linked = DoublyLinkedList()
    print(f"Linked list is empty: {linked.isEmpty()}")
    linked.insert(0)
    linked.insert(1)
    linked.insert(2)
    linked.insert(3)
    linked.insert(4)
    print(f"Linked list with items is empty: {linked.isEmpty()}")
    print(linked)

    print(f"Searched for 2: {linked.search(2)}")
    linked.delete(2)
    print(f"Deleting 2: {linked}")
    linked.delete(0)
    print(f"Deleting 0: {linked}")
    linked.delete(4)
    print(f"Deleting 4: {linked}")
    

if __name__ == "__main__":
    main()

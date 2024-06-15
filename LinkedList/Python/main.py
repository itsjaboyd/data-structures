from linkedlist import LinkedList

def main():
    linked = LinkedList()
    print("Linked list is empty: {}".format(linked.isEmpty()))
    linked.insert(0)
    linked.insert(1)
    linked.insert(2)
    linked.insert(3)
    linked.insert(4)

    print("Linked list with items is empty: {}".format(linked.isEmpty()))
    print("Linked list: {}".format(str(linked)))
    print("Head: {}, Tail: {}".format(str(linked.head), str(linked.tail)))

    searched = linked.search(2)
    print("Searched: {}".format(str(searched)))

    linked.delete(2)
    print("Deleted Node(2): {}".format(str(linked)))
    linked.delete(4)
    print("Deleted Node(4): {}".format(str(linked)))
    linked.delete(0)
    print("Deleted Node(0): {}".format(str(linked)))
    
    print("Head: {}, Tail: {}".format(str(linked.head), str(linked.tail)))

if __name__ == "__main__":
    main()

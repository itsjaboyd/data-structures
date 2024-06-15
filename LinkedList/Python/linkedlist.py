"""
    The Linked List data structure follows a linear order connected 
    with a pointer (multiple pointers for head/tail of list in the 
    case of doubly linked lists) in each data node. Linked lists 
    contain typical list operations such as a search, insert, and 
    delete. The empty determiner applies, but since linked lists 
    are dynamic, sizing does not matter at compile time.
"""

class LinkedList():
    """The singly-linked list object holds Node() with a head and tail."""

    def __init__(self):
        self.head = None
        self.tail = self.head

    def __str__(self):
        output = [] 
        temp = self.head
        while temp != None:
            output.append(temp.getData())
            temp = temp.next
        return ", ".join(str(i) for i in output)

    def search(self, item):
        """Return the found node if present."""

        temp = self.head
        found, result = False, None
        while temp != None or not found:
            if temp.data == item:
                found, result = True, temp
            temp = temp.next
        return result

    def insert(self, item):
        """Insert a new Node item as the new head."""

        # create a new node and make it the new head
        insertNode = Node(item)
        insertNode.setNext(self.head)
        self.head = insertNode

        # if there is only one element in the list make
        # the tail that element so we have a tail 
        if not self.head.next:
            self.tail = insertNode

    def delete(self, item):
        """Remove the Node item if present in the list."""

        # cannot delete an item if list is empty
        if self.isEmpty():
            return

        # simply make the head its next element to delete it 
        if self.head.getData() == item:
            self.head = self.head.next
            return

        # traverse list looking at next so we can set references
        deleted, isTail, temp = False, False, self.head
        while temp.next != None or not deleted:
            if temp.next.getData() == item:
                if temp.next == self.tail:
                    isTail, self.tail = True, temp
                deleted, temp.next = True, temp.next.next
            temp = temp if isTail else temp.next

    def isEmpty(self):
        return self.head == None

class Node():
    """Basic data object that holds data and next variables."""

    def __init__(self, data=None):
        self.data = data
        self.next = None

    def __str__(self):
        return "Node({}, {})".format(self.data, self.next)

    def getData(self):
        return self.data

    def setData(self, data):
        self.data = data

    def getNext(self):
        return self.next

    def setNext(self, next):
        self.next = next


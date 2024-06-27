"""
    The Linked List data structure follows a linear order connected 
    with a pointer (multiple pointers for head/tail of list in the 
    case of doubly linked lists) in each data node. Linked lists 
    contain typical list operations such as a search, insert, and 
    delete. The empty determiner applies, but since linked lists 
    are dynamic, sizing does not matter at compile time.
"""

class DoublyLinkedList():
    """The doubly-linked list object holds a sentinal Node() with a head and tail."""

    def __init__(self):
        self.nil = Node(None)

    def __str__(self):
        output = [] 
        temp = self.nil.next
        while temp != self.nil:
            output.append(temp)
            temp = temp.next
        return " -> ".join(str(i) for i in output)

    def search(self, item):
        """Return the found node if present."""

        temp = self.nil.next
        found, result = False, None
        while temp != self.nil or not found:
            if temp.data == item:
                found, result = True, temp
            temp = temp.next
        return result

    def insert(self, item):
        """Insert a new Node item as the new head."""

        # create a new node and make it the new head
        insertNode = Node(item)

        # the list contains no nodes, so set sentinel prev and next to new node
        if self.isEmpty():
            insertNode.setNext(self.nil)
            self.nil.prev = insertNode
            self.nil.setNext(insertNode)
            return
        
        # make the new nil.next the node and set old head previous to new node
        insertNode.setNext(self.nil.next)
        self.nil.next.setPrev(insertNode)
        self.nil.setNext(insertNode)

    def delete(self, item):
        """Remove the Node item if present in the list."""

        # cannot delete an item if list is empty
        if self.isEmpty():
            return

        # if the delete is the head then cut out the head
        if self.nil.next.getData() == item:
            self.nil.next = self.nil.next.next
            return

        # if the delete is the tail then cut out the tail
        if self.nil.prev.getData() == item:
            self.nil.prev.prev.next = self.nil
            self.nil.prev = self.nil.prev.prev
            return

        # cut out the middle node by setting previous and next node values
        temp, deleted = self.nil.next, False
        while temp != self.nil and not deleted:
            if temp.getData() == item:
                temp.prev.next = temp.next
                temp.next.prev = temp.prev
                deleted = True
            temp = temp.next

    def isEmpty(self):
        """Determines if the head of the list contains no Node() objects."""
        
        return self.nil.next == None

class Node():
    """Basic data object that holds data and next variables."""

    def __init__(self, data=None):
        self.data = data
        self.next = None
        self.prev = None

    def __str__(self):
        return f"Node({self.data})"

    def getData(self):
        return self.data

    def setData(self, data):
        self.data = data

    def getNext(self):
        return self.next

    def getPrev(self):
        return self.prev

    def setNext(self, next):
        self.next = next

    def setPrev(self, prev):
        self.prev = prev


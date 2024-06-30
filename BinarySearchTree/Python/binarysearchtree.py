"""
    Binary Sarch Trees are data structures organized into trees
    with nodes that contain a left, right, and parent depending 
    on how connected the user needs the tree to be. They offer 
    fast operations and the data is organized in helpful ways.

    BST rule: all values in the left subtree of a given node are 
    less than or equal to the given node, and all values in the
    right subtree of a node are greater than to the given node.
"""

class BinarySearchTree:
    """Binary Search Tree implementation using recursive functions."""

    def __init__(self):
        self.root = None

    def __str__(self):
        pass

    def insert(self, newData, subTree=None):
        """Insert newData into the tree in its appropriate spot."""

        if self.isEmpty():
            self.root = Node(newData)
            return

        temp = subTree if subTree else self.root
        if newData <= temp.data:
            if not self.isEmpty(temp.left, True):
                self.insert(newData, temp.left)
            else:
                newNode = Node(newData)
                newNode.parent = temp
                temp.left = newNode
        elif newData > temp.data:
            if not self.isEmpty(temp.right, True):
                self.insert(newData, temp.right)
            else:
                newNode = Node(newData)
                newNode.parent = temp
                temp.right = newNode
        
    def remove(self, removeData):
        pass

    def search(self, searchData, subTree=None, started=False):
        """Search for a node in tree containing the searchData value."""

        if self.isEmpty():
            return False
        if self.root.data == searchData:
            return True

        temp = self.root if not started else subTree
        if self.isEmpty(temp, True):
            return False
        if searchData < temp.data:
            return self.search(searchData, temp.left, True)
        elif searchData > temp.data:
            return self.search(searchData, temp.right, True)
        else: # the temp subtree node is searchData
            return True

    def maximum(self, subTree=None, started=False):
        """Return the maximum data in the tree located furthest right."""

        if self.isEmpty():
            return None

        temp = self.root if not started else subTree
        if self.isEmpty(temp.right, True):
            return temp.data
        return self.maximum(temp.right, True)


    def minimum(self, subTree=None, started=False):
        """Return the mininum data in the tree located furthest left."""
        
        if self.isEmpty():
            return None
        
        temp = self.root if not started else subTree
        if self.isEmpty(temp.left, True):
            return temp.data
        return self.minimum(temp.left, True)

    def inOrder(self):
        pass

    def preOrder(self):
        pass

    def postOrder(self):
        pass

    def successor(self):
        pass

    def predecessor(self):
        pass

    def isEmpty(self, subTree=None, useSub=False):
        return subTree is None if useSub else self.root is None


class Node:
    def __init__(self, data):
        self.data = data
        self.parent = None
        self.left = None
        self.right = None

    def __str__(self):
        return f"Node({self.data})"

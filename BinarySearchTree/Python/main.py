

import binarysearchtree

def main():
    bst = binarysearchtree.BinarySearchTree()
    bst.insert(0)
    bst.insert(1)
    bst.insert(2)
    bst.insert(3)
    bst.insert(4)

    print(bst.maximum())
    print(bst.minimum())

if __name__ == "__main__":
    main()

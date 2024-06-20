
#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;

int main() {
    LinkedList linkedlist = LinkedList();
    cout << "Linked list is empty: " << linkedlist.isEmpty() << endl;
    Node* newNode = new Node(0);
    linkedlist.insert(newNode);
    cout << "Linked list is empty after insert: " << linkedlist.isEmpty() << endl;

    return 0;
}


#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;

int main() {
    LinkedList linkedlist = LinkedList();
    cout << std::boolalpha;
    cout << "Linked list is empty: " << linkedlist.isEmpty() << endl;
    linkedlist.insert(new Node(0));
    linkedlist.insert(new Node(1));
    linkedlist.insert(new Node(2));
    linkedlist.insert(new Node(3));
    cout << "Linked list is empty after inserts: " << linkedlist.isEmpty() << endl;
    cout << "Linked list: " << linkedlist.toString() << endl;
    cout << "Found inserted Node(2): " << linkedlist.search(2) << endl;
    cout << "Deleted Node(1): " << linkedlist.remove(1) << endl;
    cout << "Linked list: " << linkedlist.toString() << endl;
    cout << "Linked list total nodes: " << linkedlist.getSize() << endl;

    return 0;
}

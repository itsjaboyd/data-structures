
#include <iostream>
#include "DoublyLinkedList.h"

using std::cout;
using std::endl;

int main() {
    DoublyLinkedList linked = DoublyLinkedList();
    cout << std::boolalpha;
    cout << "Linked list is empty: " << linked.isEmpty() << endl;
    linked.insert(new Node(0));
    linked.insert(new Node(1));
    linked.insert(new Node(2));
    linked.insert(new Node(3));
    cout << "Linked list is empty after inserts: " << linked.isEmpty() << endl;
    cout << "Linked list: " << linked.toString() << endl;

    cout << "Found inserted Node(2): " << linked.search(2) << endl;
    cout << "Deleted Node(1): " << linked.remove(1) << endl;
    cout << "Linked list: " << linked.toString() << endl;
    cout << "Deleted Node(3): " << linked.remove(3) << endl;
    cout << "Linked list: " << linked.toString() << endl;
    cout << "Deleted Node(0): " << linked.remove(0) << endl;
    cout << "Linked list: " << linked.toString() << endl;
    
    cout << "Linked list total nodes: " << linked.getSize() << endl;

    return 0;
}

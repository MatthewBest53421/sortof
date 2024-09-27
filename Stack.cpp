#include <iostream>
#include "node.h"

using namespace std;
void Stack::push(int id) {
    Node* newNode = new Node(id);
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (top) {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    else {
       cout << "Stack is empty!" << endl;
    }
}

void Stack::print() const {
    for (Node* current = top; current; current = current->next) {
        cout << current->id << " ";
    }
    cout << endl;
}

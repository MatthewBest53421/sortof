#include <iostream>
#include "node.h"

using namespace std;
void Queue::enqueue(int id) {
    Node* newNode = new Node(id);
    if (rear) {
        rear->next = newNode;
    }
    else {
        front = newNode;
    }
    rear = newNode;
}

void Queue::dequeue() {
    if (front) {
        Node* temp = front;
        front = front->next;
        if (!front) rear = nullptr;
        delete temp;
    }
    else {
       cout << "Queue is empty!" << endl;
    }
}

void Queue::print() const {
    for (Node* current = front; current; current = current->next) {
        cout << current->id << " ";
    }
   cout << endl;
}

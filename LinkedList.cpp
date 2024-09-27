#include <iostream>
#include "node.h"

using namespace std;
void LinkedList::insert(int id) {
    Node* newNode = new Node(id);
    newNode->next = head;
    head = newNode;
}

void LinkedList::print() const {
    for (Node* current = head; current; current = current->next) {
        cout << current->id << " ";
    }
    cout << endl;
}

void LinkedList::insertionSort() {
    Node* sorted = nullptr;
    for (Node* current = head; current) {
        Node* next = current->next;
        if (!sorted || sorted->id >= current->id) {
            current->next = sorted;
            sorted = current;
        }
        else {
            Node* temp = sorted;
            while (temp->next && temp->next->id < current->id) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    head = sorted;
}

void LinkedList::selectionSort() {
    for (Node* current = head; current; current = current->next) {
        Node* minNode = current;
        for (Node* temp = current->next; temp; temp = temp->next) {
            if (temp->id < minNode->id) {
                minNode = temp;
            }
        }
       swap(current->id, minNode->id);
    }
}

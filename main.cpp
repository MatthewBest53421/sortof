#include <iostream>
#include "node.h"
using namespace std;
int main() {
    LinkedList list;
    Stack stack;
    Queue queue;
    int choice, id;

    while (true) {
            cout << "Choose an option:\n"
            << "1. Add to LinkedList\n"
            << "2. Print LinkedList\n"
            << "3. Sort LinkedList with Insertion Sort\n"
            << "4. Sort LinkedList with Selection Sort\n"
            << "5. Push to Stack\n"
            << "6. Pop from Stack\n"
            << "7. Print Stack\n"
            << "8. Enqueue to Queue\n"
            << "9. Dequeue from Queue\n"
            << "10. Print Queue\n"
            << "11. Exit\n"
            << "Enter your choice: ";
            cin >> choice;

        switch (choice) {
        case 1: cout << "Enter value: "; cin >> id; list.insert(id); break;
        case 2: list.print(); break;
        case 3: list.insertionSort(); break;
        case 4: list.selectionSort(); break;
        case 5: cout << "Enter value: "; cin >> id; stack.push(id); break;
        case 6: stack.pop(); break;
        case 7: stack.print(); break;
        case 8: cout << "Enter value: "; cin >> id; queue.enqueue(id); break;
        case 9: queue.dequeue(); break;
        case 10: queue.print(); break;
        case 11: return 0;
        default: cout << "Invalid choice.\n";
        }
    }
}

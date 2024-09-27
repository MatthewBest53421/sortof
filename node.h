#ifndef NODE_H
#define NODE_H

class Node {
public:
    int id;
    Node* next;
    Node(int id) : id(id), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    void insert(int id);
    void print() const;
    void insertionSort();
    void selectionSort();
};

class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}
    void push(int id);
    void pop();
    void print() const;
};

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() : front(nullptr), rear(nullptr) {}
    void enqueue(int id);
    void dequeue();
    void print() const;
};

#endif // NODE_H

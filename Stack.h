#ifndef STACK_H
#define STACK_H

#include<iostream>
using namespace std;
template<typename T>
class Stack {
private:

    class Node {
    public:
        T value;
        Node* next;
        Node(T value = T(), Node* next = nullptr) {
            this->next = next;
            this->value = value;
        }
    };
    Node* top;
    int size;
public:

    Stack();      
    ~Stack();

    void push(const T& value);
    void pop();
    void print();
    int Size() { return size; }
    bool isEmpty() { return size == 0; }
    T& Top();
};

template <typename T>
Stack<T>::Stack() : top(nullptr), size(0) {}

template<typename T>
Stack<T>::~Stack() {                      
    while (!isEmpty()) {
        pop();
    }
}

template<typename T>
void Stack<T>::push(const T& value)
{
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;

    ++size;
}

template<typename T>
void Stack<T>::pop()
{
    if (isEmpty()) return;
    Node* temp = top;
    top = top->next;
    delete temp;
    --size;


}

template<typename T>
void Stack<T>::print()
{
    if (isEmpty()) {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Stack: ";
    for (Node* temp = top; temp != nullptr; temp = temp->next) {
        cout << temp->value << " ";
    }
    cout << endl;
}

template<typename T>
T& Stack<T>::Top()
{
    if (isEmpty()) {
        throw runtime_error("Stack is empty!\n");
    }
    return top->value;
}


#endif // STACK_H

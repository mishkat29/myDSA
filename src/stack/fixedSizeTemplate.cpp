#include <iostream>
#define MAX 100

class stack {
    int arr[MAX];
    int top;

public:
    stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack is full";
        }

        arr[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is underflow";
            return -1;
        }
        return arr[top--];
    }

    int peep() {
        return isEmpty() ? -1 : arr[top];
    }

};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    std::cout << s.pop() << std::endl;
    std::cout << s.peep() << std::endl;
}
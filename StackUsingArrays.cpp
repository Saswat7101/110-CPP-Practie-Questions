// 103. Implement a stack using arrays.

#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int capacity;
    
public:
    Stack(int size) : top(-1), capacity(size) {
        arr = new int[capacity];
    }
    
    void push(int value) {
        if (top < capacity - 1) {
            arr[++top] = value;
        } else {
            cout << "Stack is full" << endl;
        }
    }
    
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack is empty" << endl;
        }
    }
    
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1; // Or throw an exception
        }
    }
    
    bool isEmpty() {
        return (top == -1);
    }
    
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    
    cout << "Top: " << stack.peek() << endl;
    
    stack.pop();
    
    cout << "Top after pop: " << stack.peek() << endl;
    
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
// 104. Implement a queue using linked lists.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node *front;
    Node *rear;
    
public:
    Queue() : front(nullptr), rear(nullptr) {}
    
    void enqueue(int value) {
        Node *newNode = new Node(value);
        
        if (!rear) {
            front = rear = newNode;
        } else {
            rear

->next = newNode;
            rear = newNode;
        }
    }
    
    void dequeue() {
        if (!front) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        Node *temp = front;
        front = front->next;
        
        if (!front) {
            rear = nullptr;
        }
        
        delete temp;
    }
    
    int peek() {
        if (front) {
            return front->data;
        } else {
            cout << "Queue is empty" << endl;
            return -1; // Or throw an exception
        }
    }
    
    bool isEmpty() {
        return (front == nullptr);
    }
    
    ~Queue() {
        while (front) {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    
    cout << "Front: " << queue.peek() << endl;
    
    queue.dequeue();
    
    cout << "Front after dequeue: " << queue.peek() << endl;
    
    cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}
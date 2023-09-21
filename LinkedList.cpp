// 101. Implement a linked list.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node *head;
    
public:
    LinkedList() : head(nullptr) {}
    
    void append(int value) {
        Node *newNode = new Node(value);
        
        if (!head) {
            head = newNode;
        } else {
            Node *current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    
    void display() {
        Node *current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    ~LinkedList() {
        Node *current = head;
        while (current) {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    
    list.display();
    
    return 0;
}
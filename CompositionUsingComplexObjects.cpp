// 98. Demonstrate composition by creating complex objects.

#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zip;
    
public:
    Address(string s, string c, string st, string z)
        : street(s), city(c), state(st), zip(z) {}
    
    void display() {
        cout << street << ", " << city << ", " << state << " " << zip << endl;
    }
};

class Person {
private:
    string name;
    Address *address;
    
public:
    Person(string n, Address *a) : name(n), address(a) {}
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Address: ";
        address->display();
    }
};

int main() {
    Address a("123 Main St", "Cityville", "CA", "12345");
    Person p("Alice", &a);
    
    p.displayInfo();
    
    return 0;
}
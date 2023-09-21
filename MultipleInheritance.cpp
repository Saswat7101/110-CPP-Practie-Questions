// 100. Demonstrate multiple inheritance.

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

int main() {
    C c;
    c.show(); // Ambiguity: which show() to call?
    
    c.A::show();
    c.B::show();
    
    return 0;
}
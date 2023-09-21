// 97. Demonstrate abstraction using pure virtual functions.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : radius(r) {}
    
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
    
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Circle c(4.0);
    Rectangle r(5.0, 3.0);
    
    Shape *shapes[] = {&c, &r};
    
    for (Shape *s : shapes) {
        cout << "Area: " << s->calculateArea() << endl;
    }
    
    return 0;
}
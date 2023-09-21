// 95. Demonstrate inheritance using base and derived classes.

#include <iostream>
using namespace std;

class Shape {
protected:
    double area;
    
public:
    Shape(double a) {
        area = a;
    }
    
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : Shape(3.14159 * r * r), radius(r) {}
};

class Rectangle : public Shape {
private:
    double length;
    double width;
    
public:
    Rectangle(double l, double w) : Shape(l * w), length(l), width(w) {}
};

int main() {
    Circle c(4.0);
    Rectangle r(5.0, 3.0);
    
    c.displayArea();
    r.displayArea();
    
    return 0;
}
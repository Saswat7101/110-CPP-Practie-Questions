// 75. Define and use class inheritance.
#include <iostream>
using namespace std;

class Shape{
    public:
    double area;

    Shape(double a){
        area = a;
    }

    void displayArea(){
        cout << "The Area of the shape is : "<< area << endl;
    }
};

class Circle: public Shape {
    public:
    Circle(double r): Shape(3.14159 * r * r) {}
};

class Rectangle : public Shape {
    public:
    Rectangle(double l, double w) : Shape(l * w) {}
};

int main() {
    Circle c(4.0);
    Rectangle r(5.0, 3.0);

    c.displayArea();
    r.displayArea();

    return 0;
}
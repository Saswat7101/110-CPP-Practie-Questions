// 71. Define and use class constructors.
#include <iostream>
using namespace std;

class Circle {
    public:
    double radius;

    Circle(double r){
        radius = r;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c(4.0);

    cout << "Area: " << c.calculateArea() << endl;

    return 0;
}
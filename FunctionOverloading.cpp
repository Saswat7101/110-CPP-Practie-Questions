// 45. Use function overloading to calculate the area of different shapes.
#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius) {
    return (PI * radius * radius);
}

double calculateArea(double length, double width){
    return length * width;
}

int main() {
    double radius = 5.0;
    double length = 4.0, width = 6.0;

    cout << "Area of circle: " << calculateArea(radius) << endl;
    cout << "Area of rectangle: " << calculateArea(length, width) << endl;
    
    return 0;
}
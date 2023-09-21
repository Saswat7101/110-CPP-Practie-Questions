#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(double radius){
    return PI * radius * radius;
}

double calculateCircumference(double radius){
    return (2*PI)*radius;
}

int main(){
    double radius;
    cout << "Enter the Radius: ";
    cin >> radius;

    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    
    return 0;
}
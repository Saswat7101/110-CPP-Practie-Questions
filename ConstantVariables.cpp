#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;

    double radius = 5.0;
    double area = PI * radius * radius;

    cout << "Area of circle: " << area << endl;
    cout << "Days in a week: " << DAYS_IN_WEEK << endl;
    
    return 0;
}
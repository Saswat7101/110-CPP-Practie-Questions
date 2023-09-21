// 70. Define and use a class.

#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    double calculateArea(){
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.length = 5.0;
    rect.width = 3.0;

    cout << "Area: " << rect.calculateArea() << endl;
    
    return 0;
}
// 94. Demonstrate encapsulation using access specifiers.

#include <iostream>
using namespace std;

class Circle{
    private:
    double radius;

    public:
    void setRadius(double r){
        if(r > 0){
            radius = r;
        } else {
            cout << "Invalid radius value" << endl;
        }
    }

    double getRadius(){
        return radius;
    }
};

int main() {
    Circle c;
    c.setRadius(5.0);
    cout << "Radius: " << c.getRadius() << endl;

    return 0;
}
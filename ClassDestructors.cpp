// 74. Define and use class destructors.

#include <iostream>
using namespace std;

class Car{
    public:
    Car() {
        cout << "Car created" << endl;
    }

    ~Car() {
        cout << "Car destroyed" << endl;
    }
};

int main() {
    Car myCar;

    return 0;
}
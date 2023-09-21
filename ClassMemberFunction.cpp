// 77. Define and use class member functions.

#include <iostream>
using namespace std;

class Calculator {
    public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b){
        return a - b;
    }

    static int multiply(int a, int b){
        return a * b;
    }

    static int divide(int a, int b){
        return a / b;
    }
};

int main() {
    int x = 10, y = 5;

    cout << "Addition: " << Calculator::add(x, y) << endl;
    cout << "Subtraction: " << Calculator::subtract(x, y) << endl;
    cout << "Multiplication: " << Calculator::multiply(x, y) << endl;
    cout << "Division: " << Calculator::divide(x, y) << endl;

    return 0;
}
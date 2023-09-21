// 93. Use `try`, `catch`, and `finally` blocks.

#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Division by zero");
    }
    return a / b;
}

int main() {
    try {
        double num1 = 10.0, num2 = 0.0;
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cout << "Exception caught: " << e.what() << endl;
    } 
    
    cout << "Finally block executed" << endl;
    return 0;
}
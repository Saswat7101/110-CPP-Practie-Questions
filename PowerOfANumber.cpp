#include <iostream>
using namespace std;

double power(double base, int exponent){
    double result = 1.0;
    for(int i = 0; i < exponent; ++i){
        result *= base;
    }
    return result;
}

int main(){
    double base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << "Result: " << result << endl;
    
    return 0;
}
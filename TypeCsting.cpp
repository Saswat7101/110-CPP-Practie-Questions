#include <iostream>
using namespace std;

int main(){
    int num1 = 10;
    double num2 = 3.14159;

    double result = num1 + static_cast<double>(num2);

    cout << "Result: " << result << endl;
    
    return 0;
}
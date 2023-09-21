// 84. Define and use a function template.

#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main(){
    int num1 = 5, num2 = 10;
    double dbl1 = 3.14, dbl2 = 2.71;

    cout << "Max of " << num1 << " and " << num2 << ": " << max(num1, num2) << endl;
    cout << "Max of " << dbl1 << " and " << dbl2 << ": " << max(dbl1, dbl2) << endl;
    
    return 0;
}
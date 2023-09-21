// 49. Use function templates to create a generic function.
#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 5, num2 = 10;
    cout << "Max of " << num1 << " and " << num2 << ": " << max(num1, num2) << endl;
    
    double dbl1 = 3.14, dbl2 = 2.71;
    cout << "Max of " << dbl1 << " and " << dbl2 << ": " << max(dbl1, dbl2) << endl;
    
    return 0;
}
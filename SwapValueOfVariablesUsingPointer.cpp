// 54. Use pointers to swap the values of two variables.
#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;
    int *ptrA = &a, *ptrB = &b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}
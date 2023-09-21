#include <iostream>
using namespace std;

int main(){
    int a=5, b=6;
    cout << "Before swaaping: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
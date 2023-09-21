// 48. Use function pointers to dynamically select a function to call.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main(){
    int x=10, y=5;
    int(*operation)(int, int);

    operation = add;
    cout << "Addition: " << operation(x, y) << endl;

    operation = subtract;
    cout << "Subtraction: "<< operation(x,y)<<endl;

    operation = multiply;
    cout<<"Multiplication:"<<operation(x,y)<<endl;

    return 0;
}
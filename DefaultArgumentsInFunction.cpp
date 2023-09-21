// 47. Use default arguments in a function.
#include <iostream>
using namespace std;

int power(int base, int exponent = 2){
    int result = 1;
    for(int i = 0; i < exponent; ++i){
        result *= base;
    }
    return result;
}

int main() {
    int num = 3;
    int square = power(num);
    int cube = power(num, 3);
    cout << "Square: " << square << endl;
    cout << "Cube: " << cube << endl;
    return 0;
}
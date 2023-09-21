//43. Define and call a function with return value.
#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;
    return 0;
}
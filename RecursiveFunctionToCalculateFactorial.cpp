// 46. Define and call a recursive function to calculate factorial.
#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int num = 5;
    int result = factorial(num);
    cout << "Factorial of " << num << ": " << result << endl;
    return 0;
}
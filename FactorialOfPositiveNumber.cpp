#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    int factorial = 1;
    for(int i = 1; i <= num; ++i){
        factorial *= i;
    }
    cout << "Factoria: " << factorial << endl;
    return 0;
}
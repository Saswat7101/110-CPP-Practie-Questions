// Calculate the factorial of a positive integer using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: "; 
    cin >> num;

    int factorial = 1;
    int i = 1;
    while (i <= num)
    {
        factorial *= i;
        ++i;
    }
    
    cout << "Factorial: " << factorial << endl;

    return 0;
}
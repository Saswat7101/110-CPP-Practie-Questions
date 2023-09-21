// Calculate the sum of even numbers from 1 to N.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >>n ;

    int sum = 0;
    for (int i = 2; i <= n; i+= 2){
        sum +=i;
    }

    cout << "Sum of even numbers: " << sum << endl;
    
    return 0;
}
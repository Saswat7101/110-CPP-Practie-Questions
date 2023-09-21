// Determine if a number is prime using a for loop.
#include <iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1)
    {
        return false; // Not prime, return false.
    }
    for (int i = 2; i*i <= num; ++i)
    {
        if ((num % i == 0)) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is prime." << endl;
    } else {
        cout << num << " isn't prime" << endl;
    }
    
    return 0;
}
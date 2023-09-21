// Print the Fibonacci series up to a given number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >>n ;

    int a = 0, b = 1;
    cout<< "Fibonacci series: " << a << " "<<b << " ";

    for (int i = 0; i < n; i++)
    {
        int c = a + b;
        cout<<" "<<c <<"";
        a=b;
        b=c;
    }
    
    return 0;
}
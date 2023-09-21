// Check if a number is positive, negative, or zero using if-else statements.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Positive" << endl;
    } else if (num < 0)
    {
        cout << "Negative" << endl;
    } else {
        cout << "Zero";
    }
    
    return 0;
}
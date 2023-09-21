// Find the maximum of three numbers using nested if-else statements.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter 3 integers: "; 
    cin >> num1 >> num2 >> num3;

    int max_num = num1;
    if (num2 > max_num)
    {
        max_num = num2;
    }
    if (num3 > max_num) 
    {
        max_num = num3;
    }
    
    cout << "Maximum number: " << max_num << endl;
    
    return 0;
}
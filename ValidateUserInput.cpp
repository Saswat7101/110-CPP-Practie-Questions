// Use a do-while loop to validate user input.
#include <iostream>
using namespace std;

int main() {
    int num;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> num;
    } while (num <= 0);

    cout << "You entered: " << num << endl;
    
    return 0;
}
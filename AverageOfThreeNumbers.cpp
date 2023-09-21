#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    double average = (num1 + num2 + num3) / 3;
    cout << "Average: " << average << endl;
    return 0;
}
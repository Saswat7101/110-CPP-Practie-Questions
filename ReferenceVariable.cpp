// 55. Declare and use a reference variable.
#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int &ref = num;

    cout << "Value of num: " << num << endl;
    cout << "Value of ref: " << ref << endl;

    ref = 10; // Modify the value using the reference
    
    cout << "Value after modification: " << num << endl;
    
    return 0;
}
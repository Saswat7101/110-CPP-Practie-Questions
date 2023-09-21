// 52. Use a pointer to modify the value of a variable.
#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;

    cout << "Value before modification: " << num << endl;

    *ptr = 10; // Modify the value using the pointer

    cout << "Value after modification: " << num << endl;
    
    return 0;
}
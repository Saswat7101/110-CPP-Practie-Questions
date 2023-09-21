// 51. Declare and initialize a pointer.
#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Value of ptr: " << ptr << endl;
    
    return 0;
}
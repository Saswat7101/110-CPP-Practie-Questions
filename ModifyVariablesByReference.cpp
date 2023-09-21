// 56. Pass variables by reference to modify them in a function.
#include <iostream>
using namespace std;

void modify(int &val){
    val *= 2;
}

int main(){
    int num = 5;
    cout << "Before modification: " << num << endl;

    modify(num);

    cout << "After modification: " << num << endl;
    
    return 0;
}
// 68. Convert strings to numeric values.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string numStr = "123";
    string dblStr = "3.14";

    int num = stoi(numStr);
    double dbl = stod(dblStr);

    cout << "String as integer: " << num << endl;
    cout << "String as double: " << dbl << endl;
    
    return 0;
}
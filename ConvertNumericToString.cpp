// 67. Convert numeric values to strings.

#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 123;
    double dbl = 3.14;

    string numStr = to_string(num);
    string dblStr = to_string(dbl);

    cout << "Integer as string: " << numStr << endl;
    cout << "Double as string: " << dblStr << endl;
    
    return 0;
}
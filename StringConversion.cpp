// 65. Convert between C-style strings and C++ strings.

#include <iostream>
#include <string>
using namespace std;

int main(){
    const char *cstr = "Hello, C!";
    string cppstr = "Hello, C++!";

    cout << "C-style string: " << cstr << endl;
    cout << "C++ string: " << cppstr << endl;

    const char *result = cppstr.c_str();
    cout << "Converted back to C-style: " << result << endl;
    
    return 0;
}
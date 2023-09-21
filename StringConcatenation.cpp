// 62. Concatenate strings using the `+` operator.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string first = "Hello, ";
    string second = "World!";

    string result = first + second;
    cout << "\nConcatenated Strings: \t" << result ;

    return 0;
}
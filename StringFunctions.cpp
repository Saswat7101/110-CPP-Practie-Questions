// 63. Use string functions like `length()`, `substr()`, and `find()`.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "Programming in C++";

    cout << "Length: " << text.length() << endl;
    cout << "Substring: " << text.substr(15, 3) << endl; // Extract "C++"
    cout << "Position of 'in': " << text.find("in") << endl;
    
    return 0;
}
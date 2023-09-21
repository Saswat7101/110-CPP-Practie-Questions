// 88. Use the `string` class from STL.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello, C++!";
    
    cout << "Length: " << greeting.length() << endl;
    cout << "Substring: " << greeting.substr(7, 3) << endl; // Extract "C++"
    cout << "Position of ',': " << greeting.find(",") << endl;
    
    return 0;
}
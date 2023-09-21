// 64. Iterate through characters in a string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello, World!";

    for (char c : text)
    {
        cout << c << " ";
    }
    
    return 0;
}
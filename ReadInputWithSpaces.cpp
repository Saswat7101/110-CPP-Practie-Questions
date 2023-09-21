// 66. Use `getline()` to read input with spaces.

#include <iostream> // cin, cout
#include <string>
using namespace std;

int main(){
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;
    
    return 0;
}
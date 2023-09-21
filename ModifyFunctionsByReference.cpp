// 57. Return a reference from a function to modify a variable.
#include <iostream>
using namespace std;

int &max(int &a, int&b){
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 5;
    max(x, y) = 20; // Modify the larger value

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    return 0;
}
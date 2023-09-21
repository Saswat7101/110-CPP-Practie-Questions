// 50. Define and call a lambda function.
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    
    // Lambda function to calculate the sum of two numbers
    auto sum = [](int a, int b) {
        return a + b;
    };
    
    cout << "Sum: " << sum(x, y) << endl;
    
    return 0;
}
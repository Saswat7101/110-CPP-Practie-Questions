// 44. Define and call a function with multiple return values.
#include <iostream>
using namespace std;

void divide(int dividend, int divisor, int &quotient, int &remainder){
    quotient = (dividend / divisor); // integer division truncates the decimal part of quotient
    remainder = (dividend % divisor);
}

int main(){
    int num1 = 15, num2 = 4;
    int qoutient, remainder;
    divide(num1, num2, qoutient, remainder);
    cout << "Quotient: "<<qoutient<<endl<<"Remainder:"<<remainder<<endl;
    return 0;
}
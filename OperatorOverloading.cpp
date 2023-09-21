// 79. Define and use operator overloading.

#include <iostream>
using namespace std;

class Complex{
    private:
    double real;
    double imaginary;

    public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main(){
    Complex num1(3.0, 4.0);
    Complex num2(1.0, 2.0);

    Complex result = num1 + num2;
    result.display();

    return 0;
}
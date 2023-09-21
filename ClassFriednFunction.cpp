// 78. Define and use class friend functions.

#include <iostream>
using namespace std;

class Square;

class Rectangle {
    private:
    int width;
    int height;

    public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int calculateArea() {
        return width * height;
    }

    friend bool isSquare(Rectangle &r, Square &s);
};

class Square{
    private:
    int side;

    public:
    Square(int s) : side(s) {}

    int calculateArea() {
        return side * side;
    }

    friend bool isSquare(Rectangle &r, Square &s);
};

bool isSquare(Rectangle &r, Square &s) {
    return r.width == s.side && r.height == s.side;
}

int main(){
    Rectangle rect(4, 4);
    Square sq(4);

    if(isSquare(rect, sq)){
        cout << "Both shapes are squares" << endl;
    } else {
        cout << "The shapes are not squares" << endl;
    }

    return 0;
}
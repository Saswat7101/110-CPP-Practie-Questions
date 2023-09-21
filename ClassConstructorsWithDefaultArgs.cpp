// 73. Define and use class constructors with default arguments.
#include <iostream>
using namespace std;

class Book {
    public:
    string title;
    string author;
    int year;

    Book(string t = "Unknown", string a = "Unknown", int y = 0){
        title = t;
        author = a;
        year = y;
    }

    void displayInfo(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main(){
    Book book1;
    Book book2("The catcher in the Rye", "J.D. Salinger", 1951);

    book1.displayInfo();
    cout << endl;
    book2.displayInfo();

    return 0;
}
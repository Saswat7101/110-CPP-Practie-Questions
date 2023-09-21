// 72. Define and use class methods.
#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    Student s;
    s.name = "Bob";
    s.age = 20;

    s.displayInfo();

    return 0;
}
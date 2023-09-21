// 76. Define and use class access modifiers.
#include <iostream>
using namespace std;

class Person {
    private:
    string name;
    int age;

    public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displaInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    Person p("Eve", 30);
    p.displaInfo();

    return 0;
}
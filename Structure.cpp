// 69. Define and use a structure.

#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
};

int main(){
    Person p1;
    p1.name = "Alice";
    p1.age = 25;

    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    
    return 0;
}
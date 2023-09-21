// 99. Demonstrate method overriding in derived classes.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *animals[] = {new Animal(), new Dog(), new Cat()};
    
    for (Animal *a : animals) {
        a->makeSound();
    }
    
    return 0;
}
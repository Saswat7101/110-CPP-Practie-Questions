// 42. Define and call a function with parameters.
#include <iostream>
using namespace std;

void greet(string name){
    cout << "Hello, "<<name<<endl;
}

int main(){
    string user = "Saswat";
    greet(user); // Hello, Saswat
    return 0;
}
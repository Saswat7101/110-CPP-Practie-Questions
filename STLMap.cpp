// 86. Use the `map` container from STL.

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Eve"] = 28;
    
    cout << "Alice's age: " << ages["Alice"] << endl;

    for(pair<string, int> entry : ages){
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
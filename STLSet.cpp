// 87. Use the `set` container from STL.

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> numbers;
    numbers.insert(5);
    numbers.insert(2);
    numbers.insert(8);
    numbers.insert(3);
    numbers.insert(5); // Duplicates are ignored
    
    cout << "Size: " << numbers.size() << endl;

    for(int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
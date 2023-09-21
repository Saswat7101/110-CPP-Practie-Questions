// 85. Use the `vector` container from STL.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {1,2,3,4,5};

    cout << "Size: " << numbers.size() << endl;

    for(int num : numbers){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
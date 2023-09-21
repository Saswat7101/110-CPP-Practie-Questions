// 90. Use iterators to traverse and manipulate STL containers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Traverse using an iterator
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Find and erase an element
    it = find(numbers.begin(), numbers.end(), 3);
    if (it != numbers.end()) {
        numbers.erase(it);
    }
    
    // Traverse using a range-based for loop
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
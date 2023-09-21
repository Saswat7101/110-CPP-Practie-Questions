// 89. Use the `algorithm` library from STL.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + size);
    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
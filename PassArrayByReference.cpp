// 59. Use references to pass arrays to functions.
#include <iostream>
using namespace std;

void printArray(int (&arr)[5]) {
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    printArray(arr);
    
    return 0;
}
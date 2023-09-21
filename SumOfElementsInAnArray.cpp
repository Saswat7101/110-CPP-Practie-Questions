// 32. Find the sum of elements in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < size; ++i){
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;
    
    return 0;
}
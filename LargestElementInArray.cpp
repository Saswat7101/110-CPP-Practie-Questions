// 34. Find the largest element in an array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {34,12,56,78,90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_num = arr[0];
    for(int i = 0; i < size; ++i){
        if(arr[i] > max_num) {
            max_num = arr[i];
        }
    }

    cout << "Largest element: " << max_num << endl;
    
    return 0;
}
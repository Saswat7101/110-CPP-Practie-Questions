// 36. Find the second smallest element in an array.
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {9,5,2,8,1,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for(int i=0; i<size; ++i){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }

    cout << "Second smallest element: " << secondSmallest << endl;
    
    return 0;
}
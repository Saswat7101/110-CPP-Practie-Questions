// 38. Merge two sorted arrays into a third sorted array.
#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int merged[mergedSize];

    int i=0, j=0, k=0;

    while(i < size1 && j < size2){
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
    
    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; ++i) {
        cout << merged[i] << " ";
    }

    return 0;
}
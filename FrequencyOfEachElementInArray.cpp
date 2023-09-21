// 37. Find the frequency of each element in an array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 8, 4, 1, 3, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int freq[size];
    
    for(int i=0; i<size; ++i){
        freq[i] = -1;
    }

    for(int i=0; i<size; ++i){
        int count = 1;
        for(int j=i+1; j<size; ++j){
            if(arr[i] == arr[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }

    cout << "Element\tFrequency" << endl;
    for(int i=0; i<size; ++i){
        if(freq[i] != 0){
            cout << arr[i] << "\t" << freq[i] << endl;
        }
    }

    return 0;
}
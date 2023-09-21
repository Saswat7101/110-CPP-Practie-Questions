// 53. Declare and initialize a pointer to an array.
#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int *ptr = arr; // Point to the first element

    cout << "First element: " << *ptr << endl;
    
    return 0;
}
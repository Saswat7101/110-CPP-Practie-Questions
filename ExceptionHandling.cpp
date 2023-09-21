// 91. Handle exceptions using `try` and `catch`.

#include <iostream>
using namespace std;

int main(){
    try
    {
        int num = 10;
        int denom = 0;
        int result = num / denom; // Throws a division by zero exception
        cout << "Result is: "<< result << endl;
    }
    catch(const exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}

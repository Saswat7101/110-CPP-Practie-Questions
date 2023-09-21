#include <iostream>
using namespace std;

enum DaysOfWeek {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    DaysOfWeek today = Tuesday;
    cout << "Today is: " << today << endl;
    return 0;
}
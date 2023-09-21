// 82. Read data from a text file.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream infile("data.txt");

    if(infile.is_open()){
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}
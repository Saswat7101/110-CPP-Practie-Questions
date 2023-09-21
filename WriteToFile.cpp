// 81. Write data to a text file.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outfile("data.txt");

    if(outfile.is_open()) {
        outfile << "Hello, world!" << endl;
        outfile << "C++ programming is fun." << endl;
        outfile.close();
        cout << "File written successfully." << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}
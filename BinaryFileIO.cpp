// 83. Write and read binary data to/from a file.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream binaryOut("binary_data.dat", ios::binary);

    if (binaryOut.is_open()){
        int data[] = {1,2,3,4,5};
        binaryOut.write(reinterpret_cast<char*>(data), sizeof(data));
        binaryOut.close();
        cout << "Binary data written successfully." << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }

    ifstream binaryIn("binary_data.dat", ios::binary);

    if(binaryIn.is_open()){
        int data[5];
        binaryIn.read(reinterpret_cast<char*>(data), sizeof(data));
        for(int i = 0; i < 5; ++i){
            cout << data[i] << " ";
        }
        cout << endl;
        binaryIn.close();
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}
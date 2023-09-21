// 105. Implement a hash table.

#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int tableSize = 10;
    vector<int> table[tableSize];
    
    int hashFunction(int key) {
        return key % tableSize;
    }
    
public:
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }
    
    bool search(int key) {
        int index = hashFunction(key);
        
        for (int num : table[index]) {
            if (num == key) {
                return true;
            }
        }
        
        return false;
    }
    
    void remove(int key) {
        int index = hashFunction(key);
        
        vector<int>::iterator it = table[index].begin();
        while (it != table[index].end()) {
            if (*it == key) {
                table[index].erase(it);
                break;
            }
            ++it;
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(5);
    ht.insert(15);
    ht.insert(25);
    
    cout << "Is 15 in the hash table? " << (ht.search(15) ? "Yes" : "No") << endl;
    
    ht.remove(15);
    
    cout << "Is 15 in the hash table? " << (ht.search(15) ? "Yes" : "No") << endl;
    
    return 0;
}
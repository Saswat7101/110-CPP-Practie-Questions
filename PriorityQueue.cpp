// 106. Implement a priority queue using heaps.

#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
private:
    vector<int> heap;
    
    void heapifyUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[parentIndex] < heap[index]) {
                swap(heap[parentIndex], heap[index]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }
    
    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;
        
        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }
        
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }
    
public:
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }
    
    int getMax() {
        if (!heap.empty()) {
            return heap[0];
        } else {
            cout << "Priority queue is empty" << endl;
            return -1; // Or throw an exception
        }
    }
    
    void extractMax() {
        if (!heap.empty()) {
            swap(heap[0], heap[heap.size() - 1]);
            heap.pop_back();
            heapifyDown(0);
        } else {
            cout << "Priority queue is empty" << endl;
        }
    }
};

int main() {
    PriorityQueue pq;
    pq.insert(5);
    pq.insert(15);
    pq.insert(10);
    
    cout << "Max: " << pq.getMax() << endl;
    
    pq.extractMax();
    
    cout << "Max after extraction: " << pq.getMax() << endl;
    
    return 0;
}
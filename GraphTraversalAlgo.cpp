// 107. Implement graph traversal algorithms (BFS and DFS).

#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Graph {
private:
    int vertices;
    list<int> *adjacencyList;
    
public:
    Graph(int v) : vertices(v) {
        adjacencyList = new list<int>[vertices];
    }
    
    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
    }
    
    void bfs(int startVertex) {
        vector<bool> visited(vertices, false);
        queue<int> q;
        
        visited[startVertex] = true;
        q.push(startVertex);
        
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";
            
            for (int neighbor : adjacencyList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
    
    void dfs(int startVertex) {
        vector<bool> visited(vertices, false);
        stack<int> s;
        
        s.push(startVertex);
        
        while (!s.empty()) {
            int current = s.top();
            s.pop();
            
            if (!visited[current]) {
                visited[current] = true;
                cout << current << " ";
            }
            
            for (int neighbor : adjacencyList[current]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
    }
    
    ~Graph() {
        delete[] adjacencyList;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    
    cout << "BFS starting from vertex 0: ";
    g.bfs(0);
    cout << endl;
    
    cout << "DFS starting from vertex 0: ";
    g.dfs(0);
    cout << endl;
    
    return 0;
}
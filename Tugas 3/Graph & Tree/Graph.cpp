#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Graph {
private:
    // Membuat Adjacency List Untuk Graph
    map<int, vector<int> > adjacencyList;

public:
    void addEdge(int u, int v) {
        // Menyimpan Edge Ke Adjacency List
        adjacencyList[u].push_back(v);
    }

    void printGraph() {
        for (map<int, vector<int> >::iterator it = adjacencyList.begin(); it != adjacencyList.end(); ++it) {
            cout << "Node " << it->first << " Terhubung Dengan Node : ";
            for (size_t i = 0; i < it->second.size(); ++i) {
                cout << it->second[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Membuat Objek Graph
    Graph graph;

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    // Menampilkan Graph
    graph.printGraph();

    return 0;
}
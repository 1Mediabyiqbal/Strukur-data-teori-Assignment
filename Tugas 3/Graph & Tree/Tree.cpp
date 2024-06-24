#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Tree {
private:
    // Membuat Adjacency List Untuk Tree
    map<int, vector<int> > adjacencyList;

public:
    void addEdge(int u, int v) {
        // Menyimpan Edge Ke Adjacency List
        adjacencyList[u].push_back(v);
    }

    void printTree() {
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
    // Membuat Objek Tree
    Tree tree;

    tree.addEdge(0, 1);
    tree.addEdge(0, 2);
    tree.addEdge(1, 2);
    tree.addEdge(2, 3);

    // Menampilkan Tree
    tree.printTree();

    return 0;
}
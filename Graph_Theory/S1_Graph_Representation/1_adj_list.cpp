#include <iostream>
#include <list>
using namespace std;

class Graph {
    int V; //number of vertices
    list<int> *adj; //neighors can be stored in form list<list>, vector<list>, array<list>, hashmap<list>

    public:
    Graph(int v) {  
        V = v;
        adj = new list<int>[V];
    }

    void addEdge(int u, int v, bool undir=true) {
        adj[u].push_back(v);
        if (undir) adj[v].push_back(u);
    }

};

int main() {
    Graph G(11);
    G.addEdge(0, 1);
    G.addEdge(2,3);
    G.addEdge(1,3);
    //...

    return 0;
}
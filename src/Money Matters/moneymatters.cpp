#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <vector>
using namespace std;

class Graph {
    private:
        unordered_map<long, vector<long>> AL;
        unordered_set<long> visited;
        long amount_owed = 0;
        long vertices;;
        vector<long> amount;
    public:
        Graph(long nodes) {
            vertices = nodes;
            for (long i = 0; i < nodes; ++i) {
                long a; cin >> a;
                amount.push_back(a);
            }
        }

        void addEdge(long u, long v) {
            AL[u].push_back(v);
            AL[v].push_back(u);
        }

        void DFS(long node) {
            visited.insert(node);
            for (auto it = AL[node].begin(); it != AL[node].end(); ++it) {
                if (visited.find(*it) == visited.end()) DFS(*it);
            }
            amount_owed += amount[node];
        }

        void main() {
            for (long i = 0; i < vertices; ++i) {
                if (visited.find(i) == visited.end()) DFS(i);
                if (amount_owed != 0) {
                    cout << "IMPOSSIBLE";
                    return;
                }
            }
            cout << "POSSIBLE";
        }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long nodes, edges; cin >> nodes >> edges;
    Graph g(nodes);
    while (edges--) {
        long u, v; cin >> u >> v;
        g.addEdge(u, v);
    }
    g.main();

    return 0;
}
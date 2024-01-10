#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>
using namespace std;

class Graph {
    private:
        unordered_map<long, vector<long>> AL;
        unordered_set<long> visited;
        long nodes;
        long edges;
    public:
        Graph(long u, long v) {
            nodes = u;
            edges = v;
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
        }

        void main() {
            long counter = 0;
            for (long i = 0; i < nodes; ++i) {
                if (visited.find(i) == visited.end()) {
                    counter++;
                    DFS(i);
                }
            }
            cout << counter - 1 << "\n";
        }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long n; cin >> n;
    while (n--) {
        long a, b; cin >> a >> b;
        Graph g(a, b);
        for (long i = 0; i < b; ++i) {
            long u, v; cin >> u >> v;
            g.addEdge(u, v);
        }
        g.main();
    }
    return 0;
}
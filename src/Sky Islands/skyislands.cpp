#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Graph {
    public:
        unordered_map<int, vector<int>> AL;
        unordered_set<int> visited;

        void addEdges(int u, int v) { 
            AL[u].push_back(v); 
            AL[v].push_back(u);
        }

        void dfs(int u) {
            visited.insert(u);

            for (auto it = AL[u].begin(); it != AL[u].end(); it++) {
                if (visited.find(*it) == visited.end()) {
                    dfs(*it);
                }
            }
        }
};

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    Graph g;
    int a, b; cin >> a >> b;
    for (int i = 0; i < b; ++i) {
        int x, y; cin >> x >> y;
        g.addEdges(x, y);
    }

    g.dfs(1);
    if (g.visited.size() == a) {
        cout << "YES";
    } else { 
        cout << "NO";
    }
    return 0;
}
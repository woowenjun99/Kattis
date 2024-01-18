/**
 * TOPIC: SSSP + Graph Traversal
 * 
 * Supposed that a node is detected to be in a cycle, we need to perform BFS
 * and indicate the outgoing nodes to be in a negative cycle too as the results
 * can no longer be trusted.
 */
#define INF 1e9
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

int main(void) {
    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, q, s; 
    while (cin >> n >> m >> q >> s, not (n == 0 and m == 0 and q == 0 and s == 0)) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for (int i = 0; i < m; ++i) {
            int src, dest, weight; cin >> src >> dest >> weight;
            graph[src].push_back({dest, weight});
        }
        vector<int> distances(n, INF);
        distances[s] = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (auto &[u, vec]: graph) {
                if (distances[u] == INF) continue;
                for (auto &[v, w]: vec) {
                    if (distances[u] + w >= distances[v]) continue;
                    distances[v] = distances[u] + w;
                }
            }
        }
        vector<bool> in_cycle(n, false);
        for (auto &[u, vec]: graph) {
            if (distances[u] == INF) continue;
            for (auto &[v, w]: vec) {
                if (distances[u] + w >= distances[v]) continue;
                distances[v] = distances[u] + w;
                in_cycle[u] = true;
                in_cycle[v] = true;
            }
        }

        // BFS
        queue<int> dq;
        vector<bool> visited(n, false);
        for (int i = 0; i < n - 1; i++) {
            if (in_cycle[i]) {
                dq.push(i);
                visited[i] = true;
            }
        }

        while (not dq.empty()) {
            int front = dq.front(); dq.pop();
            for (auto [v, w]: graph[front]) {
                if (not visited[v]) {
                    visited[v] = true;
                    in_cycle[v] = true;
                    dq.push(v);
                }
            }
        }

        for (int i = 0; i < q; ++i) {
            int node; cin >> node;
            if (distances[node] == INF) cout << "Impossible\n";
            else if (in_cycle[node]) cout << "-Infinity\n";
            else cout << distances[node] << "\n";
        }
        cout << "\n";
    }
    return 0;
}
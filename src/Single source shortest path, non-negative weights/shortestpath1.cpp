#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<long, long> ii;
typedef vector<ii> vii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    long nodes, edges, query, start; 
    while (cin >> nodes >> edges >> query >> start, not (nodes == 0 and edges == 0 and query == 0 and start == 0)) {
        vector<long> distances(nodes, 1e9); distances[start] = 0;
        vector<vii> AL(nodes, vii());
        while (edges--) {
            long u, v, w; cin >> u >> v >> w;
            AL[u].emplace_back(v, w);
        }

        priority_queue<ii, vii, greater<ii>> pq; pq.push(make_pair(0, start));
        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();            // shortest unvisited u
            if (d > distances[u]) continue;                   // a very important check
            for (auto &[v, w] : AL[u]) {                 // all edges from u
                if (distances[u]+w >= distances[v]) continue;        // not improving, skip
                distances[v] = distances[u]+w;                       // relax operation
                pq.push({distances[v], v});                     // enqueue better pair
            }
        }

        while (query--) {
            long dist; cin >> dist;
            if (distances[dist] == 1e9) {
                cout << "Impossible\n";
                continue;
            }
            cout << distances[dist] << "\n";
        }
        cout << "\n";
    };

    return 0;
}
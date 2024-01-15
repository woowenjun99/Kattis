#define INF 1e9
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long n, m, a, k; 
    while (cin >> n >> m >> a >> k, not (n == 0 and m == 0 and a == 0 and k == 0)) {
        long remaining = n; // THE VALUE OF N BASES LEFT
        vector<vii> AL(n, vii());
        vector<bool> visited(n, false);
        while (m--) {
            long u, v, w; cin >> u >> v >> w;
            u -= 1; v -= 1;
            AL[u].emplace_back(v, w);
            AL[v].emplace_back(u, w);
        }

        for (long i = 0; i < a; ++i) {
            long base; cin >> base;
            base -= 1;

            // OPTIMIZATION: DO NOT BOTHER DOING DIJKSTRA IF THE DISTANCE IS ALREADY 0
            // if (not remaining) {
            //     cout << remaining << "\n";
            //     continue;
            // }

            vi dist(n, INF); 
            dist[base] = 0;
            priority_queue<ii, vector<ii>, greater<ii>> pq; pq.push({0, base});
            if (not visited[base]) remaining--;
            visited[base] = true;

            while (!pq.empty()) {    
                // GET THE TOP ELEMENT FROM THE PQ
                auto [d, u] = pq.top(); 
                pq.pop();

                // THE PQ RAN OUT OF SHORTER DISTANCES LESS THAN OR EQUALS TO K
                if (d >= k) break;

                // IMPORTANT CHECK. 
                if (d > dist[u]) continue; 

                for (auto &[v, w] : AL[u]) {                 // all edges from u
                    if (dist[u] + w >= dist[v] or dist[u] + w >= k) continue;        // not improving, skip
                    if (not visited[v]) remaining--;
                    visited[v] = true;
                    dist[v] = dist[u]+w;                       // relax operation
                    pq.push({dist[v], v});                     // enqueue better pair
                }
            }
            cout << remaining << "\n";
        }
        cout << "\n";
    }

  return 0;
}
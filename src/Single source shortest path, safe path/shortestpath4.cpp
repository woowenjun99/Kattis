#define INF 1e9
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int Query(int s, int t, int k, vector<vii> AL) {
    // Create a distance array like Bellman-Ford Algorithm
    vector<int> dist(AL.size(), INF);
    dist[s] = 0;

    // Go through k layers 
    for (int i = 0; i < k - 1; ++i) {
        vector<int> cloned = dist;
        for (int j = 0; j < AL.size(); ++j) {
            for (int k = 0; k < AL[j].size(); ++k) {
                int neighbour = AL[j][k].first;
                int time = AL[j][k].second;

                if (dist[j] == INF) continue;
                if (dist[j] + time < cloned[neighbour]) {
                    cloned[neighbour] = dist[j] + time;
                }
            }
        }
        dist = cloned;
    }

    if (dist[t] == INF) return -1;
    return dist[t];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int TC; cin >> TC;
    while (TC--) {
        int V; cin >> V;
        vector<vii> AL(V, vii());

        // Creating a adjacency list
        for (int i = 0; i < V; ++i) {
            int X; cin >> X;
            while (X--) {
                int a, b; cin >> a >> b;
                AL[i].emplace_back(a, b);
            }
        }

        int Q; cin >> Q;
        while (Q--) {
            int s, t, k; cin >> s >> t >> k;
            cout << Query(s, t, k, AL) << endl;
        }
        cout << endl;
    }

    return 0;
}
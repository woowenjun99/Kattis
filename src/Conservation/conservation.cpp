#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long topologicalSort(vector<queue<long>> vq, vector<vector<long>> &AL, vector<long> in_degree, long start, const vector<long> labs) {
    long swaps = 0, current = start - 1;
    
    // WHILE THERE ARE STILL ELEMENTS IN BOTH QUEUES
    // TIME COMPLEXITY: O(V + E)
    while (!vq[0].empty() or !vq[1].empty()) {
        while (!vq[current].empty()) {
            long front = vq[current].front(); 
            vq[current].pop();

            // REDUCE ALL THE IN_DEGREE BY 1 AND ADD IT INTO THE QUEUE
            for (auto it = AL[front].begin(); it != AL[front].end(); ++it) {
                long outgoing = *it;
                in_degree[outgoing] -= 1;
                if (in_degree[outgoing] == 0) vq[labs[outgoing]].push(outgoing);
            }
        }
        swaps++;
        current = current == 1 ? 0 : 1;
    }

    return swaps;
}

void solve() {
    long nodes, edges; cin >> nodes >> edges;
    vector<long> labs(nodes);

    // I am trying to read in the lab that it is conserved. 
    // TIME COMPLEXITY: O(V)
    for (long i = 0; i < nodes; ++i) {
        long lab; cin >> lab;
        lab -= 1; 
        labs[i] = lab;
    }

    vector<long> in_degree(nodes, 0);
    vector<vector<long>> AL(nodes, vector<long>());

    // I am trying to read in the edges and the in degree concurrently
    // TIME COMPLEXITY: O(E)
    for (long i = 0; i < edges; ++i) {
        long source, destination; cin >> source >> destination;
        source -= 1;
        destination -= 1;
        AL[source].push_back(destination);
        in_degree[destination] += 1;
    }

    // Process all the in_degree of 0 from both labs concurrently
    // TIME COMPLEXITY: O(V)
    vector<queue<long>> v(2, queue<long>());
    for (long i = 0; i < in_degree.size(); ++i) {
        if (in_degree[i] == 0) {
            v[labs[i]].push(i);
        }
    }

    long swaps = min(topologicalSort(v, AL, in_degree, 1, labs), topologicalSort(v, AL, in_degree, 2, labs));
    cout << swaps - 1 << "\n";
}

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long T; cin >> T;
    while (T--) solve();
    return 0;
}
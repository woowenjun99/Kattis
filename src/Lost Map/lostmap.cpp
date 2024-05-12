/**
 * @file main.cpp
 * @author Wen Jun (woowenjun99@gmail.com)
 * @brief A simple MST question but this question cannot be solved 
 * with Python because it will lead to TLE of 8 seconds. Solving 
 * with C++ is still ok.
 * @version 0.1
 * @date 2024-05-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector<vii> AL;                                  // the graph stored in AL
vi taken;                                        // to avoid cycle
priority_queue<pair<int, pair<int, int>>> pq; 

void process(int u) {
    taken[u] = 1;
    for (auto &[v, w]: AL[u]) {
        if (taken[v]) continue;
        pq.push({-w, {-v, -u}});
    }
}

void solve() {
    int n; cin >> n;
    AL.assign(n, vii());
    taken.assign(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int w; cin >> w;
            if (i == j) continue;
            AL[i].emplace_back(j, w);
        } 
    }
    process(0);
    int nums_taken = 0;
    while (not pq.empty() and nums_taken < n - 1) {
        auto [w, u] = pq.top(); pq.pop();
        w = -w; 
        int src = -u.first;
        int dest = -u.second;
        if (taken[src]) continue;
        cout << src + 1 << " " << dest + 1 << "\n";
        nums_taken++;
        process(src);
    }
}

int main(void) {
    freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
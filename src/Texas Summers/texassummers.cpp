#define INF 1e9
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> coordinates(n + 2);
    for (auto &[x, y]: coordinates) std::cin >> x >> y;
    std::vector<int> distances(n + 2, INF);
    distances[n] = 0;
    std::vector<int> parents(n + 2, -1);
    std::priority_queue<std::pair<int, int>> pq;
    pq.push({0, n});

    while (not pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (-d > distances[u]) continue;
        for (int v = 0; v < n + 2; ++v) {
            if (u == v) continue;
            int dx = coordinates[u].first - coordinates[v].first;
            int dy = coordinates[u].second - coordinates[v].second;
            int w = dx * dx + dy * dy;
            if (distances[u] + w >= distances[v]) continue;
            distances[v] = distances[u] + w;
            parents[v] = u;
            pq.push({-distances[v], v});
        }
    }

    if (parents[n + 1] == n) {
        std::cout << "-\n";
        return;
    }
    int current = parents[n + 1];
    std::stack<int> s;
    while (current != n) {
        s.push(current);
        current = parents[current];
    }
    while (not s.empty()) {
        std::cout << s.top() << "\n";
        s.pop();
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
#include <iostream>
#include <queue>
#include <tuple>

void solve() {
    int n, m;
    while (std::cin >> n >> m, not (n == 0 and m == 0)) {
        std::priority_queue<std::tuple<double, int, int>> valid_tickets;
        for (int i = 0; i < n; ++i) {
            int a, b;
            std::cin >> a >> b;
            if (a > m) continue;
            valid_tickets.push({(a / (b * 1.0)), a, b});
        }

        if (valid_tickets.empty()) {
            std::cout << "No suitable tickets offered\n";
            continue;
        }
        auto top = valid_tickets.top();
        std::cout << "Buy " <<  std::get<1>(top) << " tickets for $" << std::get<2>(top) << "\n";
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
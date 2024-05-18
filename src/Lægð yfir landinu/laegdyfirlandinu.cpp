#include <iostream>
#include <vector>

void solve() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> a(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    bool has = false;
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (a[i][j] < a[i - 1][j] and a[i][j] < a[i + 1][j] and a[i][j] < a[i][j - 1] and a[i][j] < a[i][j + 1]) has = true;
        }
    }

    if (has) std::cout << "Jebb\n";
    else std::cout << "Neibb\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}
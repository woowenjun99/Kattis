#include <iostream>
#include <vector>

void solve() {
    int n, y;
    std::cin >> n >> y;
    std::vector<bool> v(n, true);
    for (int i = 0; i < y; ++i) {
        int j;
        std::cin >> j;
        v[j] = false;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i]) std::cout << i << "\n";
        else count += 1;
    }
    std::cout << "Mario got " << count << " of the dangerous obstacles.\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}
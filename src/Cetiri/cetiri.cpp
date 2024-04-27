#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    std::vector<int> v(3);
    for (auto &i: v) std::cin >> i;
    std::sort(v.begin(), v.end());

    if (2 * v[1] == v[2] + v[0]) {
        std::cout << 2 * v[2] - v[1] << "\n";
    } else if (2 * v[1] < v[2] + v[0]) {
        std::cout << 2 * v[1] - v[0] << "\n";
    } else {
        std::cout << v[0] + v[2] - v[1] << "\n";
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
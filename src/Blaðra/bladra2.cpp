#include <iostream>

void solve() {
    int v, a, t;
    std::cin >> v >> a >> t;
    double answer = v * t + 0.5 * a * t * t;
    std::cout << answer << "\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}
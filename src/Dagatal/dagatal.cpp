#include <iostream>

void solve() {
    int m;
    std::cin >> m;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::cout << days[m - 1] << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}

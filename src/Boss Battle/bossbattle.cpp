#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    if (n <= 3) std::cout << 1 << std::endl;
    else std::cout << n - 2 << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
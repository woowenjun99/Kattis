#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    if (n % 10 == 0) std::cout << "Jebb\n";
    else std::cout << "Neibb\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
#include <iostream>

void solve() {
    long long n, answer; std::cin >> n;
    if (n % 2 == 0)  answer = (n / 2 + 1) * (n / 2 + 1);
    else answer = (((n + 1) / 2 + 1) * ((n + 1) / 2 + 1)) - (n + 1) / 2 - 1;
    std::cout << answer << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
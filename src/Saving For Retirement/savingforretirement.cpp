#include <iostream>

void solve() {
    int b, br, bs, a, as;
    std::cin >> b >> br >> bs >> a >> as;
    int goal = (br - b) * bs;
    int years = 0;
    int current = 0;
    while (current <= goal) {
        years++;
        current += as;
    }
    std::cout << years + a << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
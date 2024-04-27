#include <iostream>

void solve() {
    int a, b, c, d;
    while (std::cin >> a >> b >> c >> d, not (a == 0 and b == 0 and c == 0 and d == 0)) {
        int result = 1080;
        int current = a;
        while (current != b) {
            current = current > 0 ? (current - 1) : 39;
            result += 9;
        }
        while (current != c) {
            current = (current + 1) % 40;
            result += 9;
        }
        while (current != d) {
            current = current > 0 ? (current - 1) : 39;
            result += 9;
        }
        std::cout << result << std::endl;
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
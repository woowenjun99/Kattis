#include <iostream>
#include <string>

void solve() {
    std::string s;
    std::cin >> s;
    int w = 0, b = 0;
    for (auto c: s) {
        if (c == 'W') w++;
        else b++;
    }
    if (w == b) std::cout << 1 << std::endl;
    else std::cout << 0 << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
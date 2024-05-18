#include <iostream>
#include <unordered_set>
#include <string>

void solve() {
    int parts, n;
    std::cin >> parts >> n;
    std::unordered_set<std::string> s;
    for (int i = 1; i <= n; ++i) {
        std::string x;
        std::cin >> x;
        s.insert(x);
        if (s.size() == parts) {
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << "paradox avoided\n";
}

int main(void) {
    freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
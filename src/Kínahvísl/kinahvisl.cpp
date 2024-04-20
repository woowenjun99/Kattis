#include <iostream>
#include <string>

void solve() {
    std::string initial, final;
    std::cin >> initial >> final;
    int score = 0;
    for (int i = 0; i < initial.size(); ++i) {
        if (initial[i] != final[i]) score++;
    }
    std::cout << score + 1 << "\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
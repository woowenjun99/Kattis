#include <iostream>
#include <vector>

void solve() {
    int r, c; 
    std::cin >> r >> c;
    std::vector<std::vector<char>> v(r, std::vector<char>(c));
    for (int i = 0; i < r; ++i) {
        for (auto &it: v[i]) std::cin >> it;
    }
    int count = 0;
    for (int i = 0; i < c; ++i) {
        int is_empty_column = 1;
        for (int j = 0; j < r; ++j) {
            if (v[j][i] == '$') is_empty_column = 0;
        }
        count += is_empty_column;
    }
    std::cout << count + 1 << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
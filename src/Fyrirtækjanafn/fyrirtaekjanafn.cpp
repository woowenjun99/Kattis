#include <iostream>
#include <string>

void solve() {
    std::string word;
    std::cin >> word;
    for (auto c: word) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'Y') {
            std::cout << c;
        }
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
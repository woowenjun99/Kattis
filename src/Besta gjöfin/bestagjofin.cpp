#include <iostream>
#include <string>

void solve() {
    int n;
    std::cin >> n;
    int max_so_far = -1;
    std::string winner;
    while (n--) {
        std::string name;
        int score;
        std::cin >> name >> score;
        if (score > max_so_far) {
            max_so_far = score;
            winner = name;
        }
    }
    std::cout << winner << "\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
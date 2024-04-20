#include <iostream>
#include <string>

void solve() {
    int n;
    std::cin >> n;
    while (n--) {
        std::string name;
        std::cin >> name;
        std::cout << "Takk " << name << "\n";
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
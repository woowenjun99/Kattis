#include <iostream>
#include <string>

void solve() {
    std::string name;
    int n;
    std::cin >> name >> n;
    while (n--) std::cout << "Hipp hipp hurra, " << name << "!\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
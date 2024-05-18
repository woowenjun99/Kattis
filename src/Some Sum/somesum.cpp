#include <iostream>
int results[2] = {0, 0};

void util(int start, int n) {
    int sum = 0;
    for (int i = start; i < start + n; ++i) sum += i;
    results[sum % 2] = 1;
}

void solve() {
    int n;
    std::cin >> n;

    util(1, n);
    util(2, n);

    if (results[0] == results[1]) std::cout << "Either\n";
    else if (results[0]) std::cout << "Even\n";
    else std::cout << "Odd\n";
}

int main(void) {
    freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
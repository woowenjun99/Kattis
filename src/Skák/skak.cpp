#include <iostream>

void solve() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int answer = 0;
    if (a != c) answer += 1;
    if (b != d) answer += 1;
    std::cout << answer;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}
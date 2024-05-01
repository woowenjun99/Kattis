#include <iostream>

void solve() {
    unsigned int a, b, h;
    std::cin >> a >> b >> h;
    int times = 0;
    int current = 0;
    while (current < h) {
        times++;
        current += a;
        if (current >= h) break;
        current -= b;
    }
    std::cout << times;
}

int main()  {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    solve();
    return 0;
}
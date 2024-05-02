#include <iostream>

void solve() {
    int correctNumber[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++) {
        int piece;
        std::cin >> piece;
        std::cout << correctNumber[i] - piece << " ";
    }
}

int main()  {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    solve();
    return 0;
}
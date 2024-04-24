/**
 * Topic: Math (Ad-Hoc) 
 * 
 * By drawing out, we notice that the maximum number of bishops that can be
 * placed on the chessboard is 2n - 2. However, if n == 1, using the equation 
 * will give 0 which is wrong. The time complexity of the solution is O(1).
 */
#include <iostream>

void solve() {
    int n;
    while (std::cin >> n) {
        if (n == 1) std::cout << 1 << std::endl;
        else std::cout << 2 * n - 2 << std::endl;
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);
    solve();
    return 0;
}
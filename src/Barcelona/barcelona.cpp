#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n, k;
    std::cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        int bag;
        std::cin >> bag;
        if (bag != k) continue;
        if (i == 1) std::cout << "fyrst";
        else if (i == 2) std::cout << "naestfyrst";
        else std::cout << i << " fyrst";
    }    
    return 0;
}
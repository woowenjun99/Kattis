#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;
    
    while (t--) {
        int n, sum = 0;
        std::cin >> n;
        std::vector<int> v(n);
        for (int &i: v) std::cin >> i;
        std::sort(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; ++i) sum += (v[i + 1] - v[i]);
        std::cout << sum * 2 << "\n";
    }
    return 0;
}
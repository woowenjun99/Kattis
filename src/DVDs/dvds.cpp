#include <iostream>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);

    int tc;
    std::cin >> tc;
    while (tc--) {
        int k;
        std::cin >> k;
        std::vector<int> v(k);
        for (auto &i: v) std::cin >> i;

        int count = k, pointer = 1;
        for (int i = 0; i < k; ++i) {
            if (v[i] == pointer) {
                count--;
                pointer++;
            }
        }
        std::cout << count << "\n";
    }

    return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int tc;
    std::cin >> tc;
    while (tc--) {
        int g;
        std::cin >> g;
        std::vector<int> unsorted(g);
        std::vector<int> sorted(g);
        for (int i = 0; i < g; ++i) {
            int n;
            std::cin >> n;
            unsorted[i] = n;
            sorted[i] = n;
        }
        std::sort(sorted.begin(), sorted.end());

        // Find the first start
        int start = 0;
        for (int i = 0; i < g; ++i) {
            if (unsorted[0] == sorted[i]) {
                start = i;
                break;
            }
        }

        for (int i = 0; i < g; ++i) {
            if (unsorted[i] == sorted[start]) {
                start++;
                continue;
            }
            std::cout << i + 1 << std::endl;
            break;
        }
    }

    return 0;
}
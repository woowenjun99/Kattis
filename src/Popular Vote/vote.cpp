#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto &i: v) std::cin >> i;

    int total = std::accumulate(v.begin(), v.end(), 0);
    int largest_element = *std::max_element(v.begin(), v.end());
    int count = std::count(v.begin(), v.end(), largest_element);

    if (count == 1) {
        if (largest_element > total / 2) std::cout << "majority";
        else std::cout << "minority";

        int index = std::find(v.begin(), v.end(), largest_element) - v.begin() + 1;
        std::cout << " winner " << index << "\n";
    } else std::cout << "no winner\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int t;
    std::cin >> t;
    while (t--) solve();

    return 0;
}
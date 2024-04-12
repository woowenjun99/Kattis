#include <iostream>
#include <set>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(0); 
    std::cin.tie(0); 
    std::cout.tie(0);

    // Populate the values
    std::multiset<int> left;
    std::multiset<int> right;
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (auto& i: v) std::cin >> i;

    if (n == 1) {
        std::cout << 1 << " " << v[0] << std::endl;
        return 0;
    }

    // Fill up the right partition
    for (int i = 1; i < n; ++i) right.insert(v[i]);

    std::vector<int> result;
    if (v[0] < *right.begin()) result.push_back(v[0]);
    left.insert(-v[0]);
    right.erase(v[1]);

    for (int i = 1; i < n - 1; ++i) {
        int maximum_of_left = -*left.begin();
        int minimum_of_right = *right.begin();
        if (v[i] > maximum_of_left and v[i] < minimum_of_right) result.push_back(v[i]);
        left.insert(-v[i]);
        right.erase(v[i + 1]);
    }

    if (v[n - 1] > -*left.begin()) result.push_back(v[n - 1]);

    std::cout << result.size() << " ";
    for (int i = 0; i < (std::min(100, static_cast<int>(result.size()))); ++i) std::cout << result[i] << " ";

    return 0;
}
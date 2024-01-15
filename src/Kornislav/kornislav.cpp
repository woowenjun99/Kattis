#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(4);
    for (int i = 0; i < 4; ++i) std::cin >> v[i];
    std::sort(v.begin(), v.end());
    std::cout << (v[0] * v[2]);
    return 0;
}
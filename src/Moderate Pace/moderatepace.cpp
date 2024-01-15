#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int days;
    std::cin >> days;
    std::vector<long> me(days);
    std::vector<long> colleague_a(days);
    std::vector<long> colleague_b(days);

    for (auto &i: me) std::cin >> i;
    for (auto &i: colleague_a) std::cin >> i;
    for (auto &i: colleague_b) std::cin >> i;

    for (long i = 0; i < days; ++i) {
        std::vector<long> distance;
        distance.push_back(me[i]);
        distance.push_back(colleague_a[i]);
        distance.push_back(colleague_b[i]);
        sort(distance.begin(), distance.end());
        std::cout << distance[1] << " ";
    }

    return 0;
}
#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    long n, k;
    std::cin >> n >> k;
    std::vector v(k, 0);
    for (long i = 0; i < n; ++i) {
        long colour;
        std::cin >> colour;
        v[colour - 1] += 1;
    }

    long minimum = *min_element(v.begin(), v.end());
    std::queue<long> q;
    for (long i = 0; i < v.size(); ++i) {
        if (v[i] == minimum) q.push(i + 1);
    }

    std::cout << q.size() << "\n";
    while (not q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

void solve() {
    int n, solution = 0;
    std::cin >> n;
    std::vector<int> nums(n);
    for (auto &it: nums) std::cin >> it;
    std::sort(nums.begin(), nums.end());
    std::deque<int> dq;
    for (auto num: nums) {
        if (dq.empty() or dq.back() + 1 == num) {
            dq.push_back(num);
            continue;
        }
        solution += dq.front();
        dq.clear();
        dq.push_back(num);
    }
    std::cout << solution + dq.front() << "\n";
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
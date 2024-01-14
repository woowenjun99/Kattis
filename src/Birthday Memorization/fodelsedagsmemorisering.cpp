#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <algorithm>

int main() {
    // freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::unordered_map<std::string, std::priority_queue<std::pair<int, std::string>>> mappers;
    std::vector<std::string> vs;
    int n;
    std::cin >> n;
    while (n--) {
        std::string name, birthday;
        int number;
        std::cin >> name >> number >> birthday;
        mappers[birthday].push({number, name});
    }

    for (auto &[k, v]: mappers) vs.push_back(v.top().second);
    std::sort(vs.begin(), vs.end());
    std::cout << vs.size() << "\n";
    for (auto str: vs) std::cout << str << "\n";

    return 0;
}
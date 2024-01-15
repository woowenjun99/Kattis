#include <iostream>
#include <unordered_map>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int people;
    std::cin >> people;
    std::unordered_map<long, int> mappers;
    for (int i = 2; i <= people; ++i) {
        int value;
        std::cin >> value;
        mappers[value] = i;
    }

    std::cout << 1 << " ";
    for (int i = 0; i < mappers.size(); ++i) {
        std::cout << mappers[i] << " ";
    }

    return 0;
}
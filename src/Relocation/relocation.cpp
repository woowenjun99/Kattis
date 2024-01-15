#include <cmath>
#include <iostream>
#include <unordered_map>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    long n, q;
    std::cin >> n >> q;
    std::unordered_map<long, long> office_to_location;
    for (long i = 1; i <= n; ++i) {
        long location;
        std::cin >> location;
        office_to_location[i] = location;
    }

    for (long i = 0; i < q; ++i) {
        int command;
        std::cin >> command;
        if (command == 1) {
            long office, location;
            std::cin >> office >> location;
            office_to_location[office] = location;
            continue;
        }
        long office_a, office_b;
        std::cin >> office_a >> office_b;
        std::cout << std::abs(office_to_location[office_a] - office_to_location[office_b]) << "\n";
    }
    return 0;
}
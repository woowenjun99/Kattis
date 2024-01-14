#include <iostream>
#include <vector>

void print(int n) {
    while (n--) std::cout << "*";
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, counter = 0;
    std::cin >> n >> m;
    std::vector<int> rooms(n, 0);

    while (m > 0) {
        rooms[counter % n]++;
        counter++;
        m--;
    }

    for (auto room: rooms) {
        print(room);
    }

    return 0;
}
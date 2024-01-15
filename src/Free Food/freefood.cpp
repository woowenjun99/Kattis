#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, counter = 0;
    std::cin >> n;
    std::vector<int> events(365, 0);
    while (n--) {
        int start, end;
        std::cin >> start >> end;
        start -= 1;
        end -= 1;
        for (int i = start; i <= end; ++i) events[i] = true;
    }

    for (int i = 0; i < 365; ++i) {
        if (events[i]) counter++;
    }
    std::cout << counter;

    return 0;
}
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        std::priority_queue<int, std::vector<int>, std::greater<int>> godzilla_army;
        std::priority_queue<int, std::vector<int>, std::greater<int>> mechagodzilla_army;

        while (a--) {
            int minion;
            std::cin >> minion;
            godzilla_army.push(minion);
        }

        while (b--) {
            int minion;
            std::cin >> minion;
            mechagodzilla_army.push(minion);
        }

        while (not mechagodzilla_army.empty() and not godzilla_army.empty()) {
            if (mechagodzilla_army.top() > godzilla_army.top()) {
                godzilla_army.pop();
                continue;
            } else if (mechagodzilla_army.top() == godzilla_army.top()) {
                mechagodzilla_army.pop();
                continue;
            }
            mechagodzilla_army.pop();
        }

        if (mechagodzilla_army.empty()) {
            std::cout << "Godzilla\n";
            continue;
        } else if (godzilla_army.empty()) {
            std::cout << "MechaGodzilla\n";
            continue;
        }
        std::cout << "uncertain\n";
    }

    return 0;
}
#include <iostream>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int w, p;
    std::cin >> w >> p;
    std::vector<int> areas_available;
    int previous = 0;
    for (int i = 0; i < p; ++i) {
        int current;
        std::cin >> current;
        areas_available.push_back(current - previous);
        previous = current;
    }
    areas_available.push_back(w - previous);

    std::vector<bool> can_be_used(w + 1, false);
    for (int i = 0; i < areas_available.size(); ++i) {
        int total = 0;
        for (int j = i; j < areas_available.size(); ++j) {
            total += areas_available[j];
            can_be_used[total] = true;
        }
    }

    for (int i = 1; i <= w; ++i) {
        if (can_be_used[i]) std::cout << i << " ";
    }
    return 0;
}
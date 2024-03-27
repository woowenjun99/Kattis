#include <iostream>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int c, p, result = 0;
    std::cin >> c >> p;
    std::vector<int> v(c);
    for (auto& i: v) std::cin >> i;

    for (int i = 0; i < c; ++i) {
        if (p == 1) {
            result++;
            if (i >= 3 and v[i] == v[i - 1] and v[i - 1] == v[i - 2] and v[i - 2] == v[i - 3]) result++;
        } else if (p == 2) {
            if (i >= 1 and v[i] == v[i - 1]) result++;
        } else if (p == 3) {
            if (i >= 1 and v[i - 1] == v[i] + 1) result++;
            if (i >= 2 and v[i - 1] == v[i - 2] and v[i] == v[i - 1] + 1) result++;
        } else if (p == 4) {
            if (i >= 1 and v[i - 1] + 1 == v[i]) result++;
            if (i >= 2 and v[i - 1] + 1 == v[i - 2] and v[i] == v[i - 1]) result++;
        } else if (p == 5) {
            if (i >= 2 and v[i - 2] == v[i - 1] and v[i - 1] == v[i]) result++;
            if (i >= 1 and v[i] == v[i - 1] + 1) result++;
            if (i >= 1 and v[i] + 1 == v[i - 1]) result++;
            if (i >= 2 and v[i] == v[i - 2] and v[i - 1] + 1 == v[i]) result++;
        }   else if (p == 6) {
            if (i >= 2 and v[i - 2] == v[i - 1] and v[i - 1] == v[i]) result++;
            if (i >= 1 and v[i] == v[i - 1]) result++;
            if (i >= 1 and v[i] + 2 == v[i - 1]) result++;
            if (i >= 2 and v[i - 2] + 1 == v[i - 1] and v[i - 1] == v[i]) result++;
        }
         else if (p == 7) {
            if (i >= 2 and v[i - 2] == v[i - 1] and v[i - 1] == v[i]) result++;
            if (i >= 1 and v[i] == v[i - 1]) result++;
            if (i >= 1 and v[i] == v[i - 1] + 2) result++;
            if (i >= 2 and v[i - 2] == v[i - 1] and v[i - 1] == v[i] + 1) result++;
        }
    }

    std::cout << result << std::endl;
    return 0;
}
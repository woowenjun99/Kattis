#include <cmath>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        double v, theta, x, h1, h2;
        std::cin >> v >> theta >> x >> h1 >> h2;
        
        const double pi = std::acos(-1);
        const double time = 1.0 * x / (v * std::cos(pi * theta / 180));
        const double y = 1.0 * v * time * std::sin(pi * theta / 180) - 0.5 * 9.81 * pow(time, 2);
        if (h1 + 1 <= y and h2 - 1 >= y) std::cout << "Safe\n";
        else std::cout << "Not Safe\n"; 
    }

    return 0;
}
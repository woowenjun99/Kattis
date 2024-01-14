#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    double r, m, c;
    while (std::cin >> r >> m >> c, not (r == 0 and m == 0 and c == 0)) {
        std::cout << std::fixed << std::setprecision(5);
        std::cout << M_PI * r * r << " " << (c / m) * 4 * r * r << "\n";
    }
    
    return 0;
}
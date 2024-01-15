#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int m;
    std::cin >> m;
    std::cout << std::setprecision(15) << m * m * M_PI << "\n";
    std::cout << std::setprecision(15) << m * m * 2 << "\n";

    return 0;
}
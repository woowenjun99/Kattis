#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (b % 2 ? "impossible" : "possible");
    return 0;
}
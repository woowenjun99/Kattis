#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int year;
    std::cin >> year;
    if (year < 2020) std::cout << 1000 << "\n";
    else std::cout << 1000 + (year - 2020) * 100 << "\n";

    return 0;
}
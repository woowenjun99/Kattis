#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
	int a, b;
	std::cin >> a >> b;
	std::cout << a - b << std::endl;
    return 0;
}
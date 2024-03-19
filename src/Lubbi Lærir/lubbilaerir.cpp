#include <iostream>
#include <string>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

	std::string prompt;
	std::cin >> prompt;
	std::cout << prompt[0] << std::endl;
    return 0;
}
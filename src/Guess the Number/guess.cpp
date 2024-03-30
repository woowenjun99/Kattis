#include <iostream>
#include <string>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int current = 500, lower = 1, upper = 1000;
    std::string response;
    std::cout << current << std::endl;
    while (std::cin >> response, response != "correct") {
        if (response == "lower") upper = current - 1;
        else lower = current + 1;
        current = (upper + lower) / 2;
        std::cout << current << std::endl;
    }

    return 0;
}
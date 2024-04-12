#include <iostream>

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);

    int sweet, sour;
    while (std::cin >> sweet >> sour, not (sweet == 0 and sour == 0)) {
        if (sweet + sour == 13) std::cout << "Never speak again.\n";
        else if (sour > sweet) std::cout << "Left beehind.\n";
        else if (sour == sweet) std::cout << "Undecided.\n";
        else std::cout << "To the convention.\n";
    }

    return 0;
}
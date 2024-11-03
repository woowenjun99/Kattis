#include <iostream>

int main(void) {
    int a, b;
    std::cin >> a >> b;
    if (a > b) std::cout << "MAGA!";
    else if (a == b) std::cout << "WORLD WAR 3!";
    else std::cout << "FAKE NEWS!";
    return 0;
}
#include <iostream>
#include <string>

void conversion(std::string &str) {
    for (long i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' and str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, score = 0;
    std::cin >> n;
    while (n--) {
        std::string str;
        std::cin >> str;
        conversion(str);
        if (str.find("rose") != std::string::npos or str.find("pink") != std::string::npos) {
            score++;
        }
    }

    if (score) {
        std::cout << score;
    } else {
        std::cout << "I must watch Star Wars with my daughter";
    }

    return 0;
}
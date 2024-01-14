#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string full;
    std::cin >> full;

    // Divide
    std::string str1 = full.substr(0, 1 + ((full.size() - 1) / 2));
    std::string str2 = full.substr(1 + (full.size() - 1) / 2, full.size());

    // Rotate
    long sum = 0;
    for (char c: str1) sum += c - 'A';
    for (long i = 0; i < str1.size(); ++i) {
        str1[i] = (str1[i] - 'A' + sum) % 26 + 'A';
    }

    sum = 0;
    for (char c: str2) sum += c - 'A';
    for (long i = 0; i < str2.size(); ++i) {
        str2[i] = (str2[i] - 'A' + sum) % 26 + 'A';
    }

    // Merge
    for (long i = 0; i < str2.size(); ++i) {
        str1[i] = (str1[i] - 'A' + str2[i] - 'A') % 26 + 'A';
    }

    std::cout << str1;
    return 0;
}
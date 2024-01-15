#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string Adrian = "ABC";
    std::string Bruno = "BABC";
    std::string Goran = "CCAABB";
    std::vector<int> scores(3, 0);

    int n;
    std::string str;
    std::cin >> n >> str;

    for (long i = 0; i < str.size(); ++i) {
        if (str[i] == Adrian[i % 3]) scores[0]++;
        if (str[i] == Bruno[i % 4]) scores[1]++;
        if (str[i] == Goran[i % 6]) scores[2]++;
    }
    int max = *std::max_element(scores.begin(), scores.end());
    std::cout << max << "\n";
    if (scores[0] == max) std::cout << "Adrian\n";
    if (scores[1] == max) std::cout << "Bruno\n";
    if (scores[2] == max) std::cout << "Goran\n";

    return 0;
}
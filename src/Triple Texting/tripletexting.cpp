#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    
    
    std::string sentence;
    std::cin >> sentence;
    std::unordered_set<string> s;
    size_t length = sentence.size() / 3;
    for (int i = 0; i < 3; ++i) {
        std::string word;
        for (int j = i * length; j < (i + 1) * length; ++j) {
            word.push_back(sentence[j]);
        }
        if (s.find(word) != s.end()) {
            std::cout << word << "\n";
            return 0;
        }
        s.insert(word);
    }

    return 0;
}
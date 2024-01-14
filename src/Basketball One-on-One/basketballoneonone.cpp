#include <iostream>
#include <string>
using namespace std;

int main() {
    string text; cin >> text;
    int score[2] = {0};
    for (int i = 0; i < text.size() - 1; i += 2) 
        score[text[i] - 'A'] += text[i + 1] - '0';
    
    cout << (score[0] > score[1] ? 'A' : 'B');
    return 0;
}
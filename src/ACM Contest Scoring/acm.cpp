#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int> questions;
    int a, score = 0, correct = 0;
    while (cin >> a, a != -1) {
        char b; string c; cin >> b >> c;
        if (c == "right") {
            if (questions.find(b) == questions.end()) {
                score += a;
                correct++;
                continue;
            }
            score += questions.find(b)->second * 20 + a;
            correct++;
        } else {
            if (questions.find(b) == questions.end()) {
                questions.insert(pair<char, int>(b, 1));
                continue;
            }
            questions.find(b)->second++;
        }
    }
    cout << correct << " " << score << "\n";
}
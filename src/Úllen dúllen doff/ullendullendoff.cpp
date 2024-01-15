#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<string> words(n);
    for (auto &word: words) cin >> word;
    cout << words[12 % n];
    return 0;
}
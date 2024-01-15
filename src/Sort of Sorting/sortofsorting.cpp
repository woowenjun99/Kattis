#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long x; cin >> x;
    while (x) {
        vector<string> words(x);
        for (long i = 0; i < x; ++i) cin >> words[i];
        stable_sort(words.begin(), words.end(), [](string a, string b) {
            if (a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1];
        });
        for (string x: words) cout << x << "\n";
        cout << "\n";
        cin >> x;
    }
}
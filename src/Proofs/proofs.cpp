#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    unordered_set<string> s;
    int x, counter = 1; cin >> x;
    while (x--) {
        string y; cin >> y;
        while (y != "->") {
            if (s.find(y) == s.end()) {
                cout << counter;
                return 0;
            }
            cin >> y;
        }

        cin >> y;
        counter++;
        s.insert(y);
    }
    cout << "correct";
    return 0;
}
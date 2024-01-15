#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int N; cin >> N;
    vector<string> names(N);
    for (string &name: names) cin >> name;
    vector<string> original = names;
    sort(names.begin(), names.end());
    bool same = true;
    for (int i = 0; i < names.size(); ++i) {
        if (names[i] !=  original[i]) {
            same = false;
        }
    }
    if (same) {
        cout << "INCREASING";
        return 0;
    }

    same = true;
    for (int i = 0; i < names.size(); ++i) {
        if (names[names.size() - 1 - i] !=  original[i]) {
            same = false;
        }
    }
    if (same) {
        cout << "DECREASING";
        return 0;
    }
    cout << "NEITHER";
    return 0;
}
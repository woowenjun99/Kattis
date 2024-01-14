#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    long x; cin >> x;
    vector<string> names(x);
    for (auto &name: names) cin >> name;

    long y; cin >> y;
    for (long i = 0; i < y; ++i) {
        string z; cin >> z;
        if (z == "cut") {
            string a, b; cin >> a >> b;
            names.insert(find(names.begin(), names.end(), b), a);
        } else {
            string a; cin >> a;
            names.erase(find(names.begin(), names.end(), a));
        }
    }

    for (auto name: names) cout << name << endl;
}
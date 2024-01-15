#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int a; cin >> a;
    for (int i = 0; i < a; ++i) {
        int b; cin >> b;
        cout << ceil(b / 400.0) << "\n";
    }
}
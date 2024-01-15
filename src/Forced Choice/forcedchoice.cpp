#include <iostream>
#include <vector>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, p, s; cin >> n >> p >> s;
    for (int i = 0; i < s; ++i) {
        int x; cin >> x;
        bool removed = false;
        for (int j = 0; j < x; ++j) {
            int y; cin >> y;
            if (y == p) removed = true;
        }
        if (!removed) cout << "REMOVE\n";
        else cout << "KEEP\n";
    }

    return 0;
}
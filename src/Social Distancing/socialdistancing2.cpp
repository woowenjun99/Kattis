#include <iostream>
#include <vector>
using namespace std;

int main() {
    long S, N; cin >> S >> N;

    vector<bool> occupied(S, false);
    while (N--) { // Repeat N times
        long i; cin >> i; --i; // 0-based
        occupied[i] = true;
    }

    int ans = 0;
    for (int i = 0; i < S; ++i) {
        int imin1 = (i + S - 1) % S, iplus1 = (i + 1) % S;
        if (not occupied[imin1] and not occupied[iplus1] and not occupied[i]) {
            ++ans;
            occupied[i] = true;
        }
    }

    cout << ans;
    return 0;
}
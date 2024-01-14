#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long r, c; cin >> r >> c;
    vector<vector<char>> parking(r, vector<char>(c));
    for (long i = 0; i < r; ++i) {
        for (long j = 0; j < c; ++j) cin >> parking[i][j];
    }

    vector<long> counter(5, 0);
    for (long i = 0; i < r - 1; ++i) {
        for (long j = 0; j < c - 1; ++j) {
            char tl = parking[i][j], tr = parking[i][j + 1], bl = parking[i + 1][j], br = parking[i + 1][j + 1];
            if (tl == '#' or tr == '#' or bl == '#' or br == '#') continue;
            long score = 0;
            if (tl == 'X') score++;
            if (tr == 'X') score++;
            if (bl == 'X') score++;
            if (br == 'X') score++;
            counter[score]++;
        }
    }

    for (auto it: counter) cout << it << "\n";
    return 0;
}
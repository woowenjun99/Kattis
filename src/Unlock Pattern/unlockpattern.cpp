#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<vector<int>> vi(3, vector<int>(3));
    vector<pair<int, int>> vp(9);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> vi[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            vp[vi[i][j] - 1] = make_pair(i, j);
        }
    }

    double distance = 0;
    for (int i = 1; i < 9; ++i) {
        distance += hypot(vp[i - 1].first - vp[i].first, vp[i - 1].second - vp[i].second);
    }

    cout << setprecision(100) << distance;
    return 0;
}
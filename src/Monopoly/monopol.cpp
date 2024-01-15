#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    unordered_map<int, int> mappers;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            mappers[i + j]++;
        }
    }

    int n; cin >> n;
    int total = 0;
    while (n--) {
        int o; cin >> o;
        total += mappers[o];
    }
    cout << fixed << setprecision(5) << (total * 1.0) / 36;

    return 0;
}
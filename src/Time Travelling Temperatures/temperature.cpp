#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long x, y;
    cin >> x >> y;
    if (y == 1 && x != 0) {
        cout << "IMPOSSIBLE";
        return 0;
    } else if (y == 1 && x == 0) {
        cout << "ALL GOOD";
        return 0;
    }
    cout << fixed << setprecision(6) << (1.0 * x) / (1 - y);
}
#include <iostream>
using namespace std;

int main() {
    long c, n, x, y, z, capacity = 0; cin >> c >> n;

    for (long i = 0; i < n; ++i) {
        cin >> x >> y >> z; 
        capacity += y - x;

        if (capacity < 0 || capacity > c || (capacity < c && z != 0)) {
            cout << "impossible\n";
            return 0;
        }
    }

    if (capacity != 0 || z != 0 || y != 0) {
        cout << "impossible\n";
        return 0;
    }
    cout << "possible";
}
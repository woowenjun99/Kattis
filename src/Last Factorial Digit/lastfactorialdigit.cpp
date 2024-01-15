#include <iostream>
using namespace std;

int main() {
    long x; cin >> x;

    for (long i = 0; i < x; ++i) {
        long y; cin >> y;
        if (y == 1) {
            cout << 1 << endl;
        } else if (y == 2) {
            cout << 2 << endl;
        } else if (y == 3) {
            cout << 6 << endl;
        } else if (y == 4) {
            cout << 4 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
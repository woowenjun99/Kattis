#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x + y == 0) {
        cout << "Not a moose";
    } else if (x == y) {
        cout << "Even " << x * 2;
    } else {
        if (x > y) {
            cout << "Odd " << 2 * x;
        } else {
            cout << "Odd " << 2 * y;
        }
    }
}
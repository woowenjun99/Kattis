#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, n;
    cin >> a >> b >> c >> d >> e >> n;
    if (n >= a) {
        cout << "A";
    } else if ((n < a) && (n >= b)) {
        cout << "B";
    } else if ((n < b) && (n >= c)) {
        cout << "C";
    } else if ((n < c) && (n >= d)) {
        cout << "D";
    } else if ((n < d) && n >= e) {
        cout << "E";
    } else {
        cout << "F";
    }
}
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    do {
        long a = x / y;
        long b = x % y;
        cout << a << " " << b << " / " << y << endl;
        cin >> x >> y;
    } while (x != 0 && y != 0);
}
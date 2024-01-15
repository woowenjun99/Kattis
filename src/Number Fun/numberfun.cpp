#include <iostream>
#include <cmath>
using namespace std;

bool isPossible(int a, int b, int c) {
    if (a + b == c) {
        return true;
    } else if (a - b == c || b - a == c) {
        return true;
    } else if (a * b == c) {
        return true;
    } else if ((a % b == 0 && a / b == c) || (b % a == 0 && b / a == c)) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (isPossible(a, b, c)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
}
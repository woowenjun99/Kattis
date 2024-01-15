#include <iostream>
using namespace std;

int main() {
    long x, sum = 0; cin >> x;
    for (long i = 0; i < x; ++i) {
        long y; cin >> y;
        if (y < 0) {
            sum -= y;
        }
    }
    cout << sum;
}
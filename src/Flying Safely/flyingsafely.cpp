#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long n; cin >> n;
    for (long i = 0; i < n; ++i) {
        long a, b; cin >> a >> b;
        for (long j = 0; j < b; j++) {
            long m, n; cin >> m >> n;
        }
        cout << a - 1 << "\n";
    }
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    cout << (100 / (a * 1.0)) << "\n" << ((100 * 1.0) / (100 - a));
    return 0;
}
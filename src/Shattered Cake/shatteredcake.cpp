#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long width, num, area = 0; cin >> width >> num;
    for (long long i = 0; i < num; ++i) {
        long a, b; cin >> a >> b;
        area += (a * b);
    }
    cout << area / width;
}
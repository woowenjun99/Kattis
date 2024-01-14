#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int coffee = 0, lessons = 0;
    int n; cin >> n;
    for (long i = 0; i < n; ++i) {
        char c; cin >> c;
        if (c == '1') {
            coffee = 2;
            lessons++;
            continue;
        } else if (coffee) {
            coffee--;
            lessons++;
        }
    }
    cout << lessons;
    return 0;
}
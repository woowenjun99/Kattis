#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int counter = 0;
    while (n--) {
        int confidence = 0;
        for (int i = 0; i < 3; ++i) {
            int a; cin >> a;
            confidence += a;
        }
        if (confidence >= 2) counter++;
    }
    cout << counter << endl;
    return 0;
}
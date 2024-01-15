#include <iostream>
#include <string>
using namespace std;

int check(int n) {
    int sum = 0;
    string total = to_string(n);
    for (int i = 0; i < total.size(); ++i) {
        sum += total[i] - '0';
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    while (cin >> n, n != 0) {
        int p = 11;
        while (check(n) != check(n * p)) p++;
        cout << p << endl;
    }

    return 0;
}
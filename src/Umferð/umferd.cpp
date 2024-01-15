#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    int solution = 0;
    for (int i = 0; i < m; ++i) {
        string str; cin >> str;
        for (auto letter: str) {
            if (letter == '.') solution++;
        }
    }
    cout << fixed << setprecision(5) << (solution * 1.0) / (n * m);


    return 0;
}
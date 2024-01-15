#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str; cin >> str;
    int b = 0, k = 0;
    for (auto letter: str) {
        if (letter == 'b') b++;
        else if (letter == 'k') k++;
    }

    if (b == 0 and k == 0) cout << "none";
    else if (b == k) cout << "boki";
    else if (b < k) cout << "kiki";
    else cout << "boba";

    return 0;
}
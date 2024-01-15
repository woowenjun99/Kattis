#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b; cin >> a >> b;
    while (b--) {
        string str; int c;
        cin >> str >> c;
        cout << str << " ";
        if (c < a) cout << "lokud\n";
        else cout << "opin\n";
    }

    return 0;
}
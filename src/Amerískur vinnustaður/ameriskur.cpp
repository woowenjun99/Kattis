#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    cout << fixed << setprecision(5) << n * 0.09144 << endl;

    return 0;
}
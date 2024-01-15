#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double a, b, c, d; cin >> a >> b >> c >> d;
    cout << fixed << setprecision(2) << abs(c - a) * abs(d - b) << endl;
    return 0;
}
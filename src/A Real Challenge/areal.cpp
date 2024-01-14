#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    unsigned long long area;
    cin >> area;
    cout << fixed;
    cout << setprecision(9) << 4 * sqrt(area);
}
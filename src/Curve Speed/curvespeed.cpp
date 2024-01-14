#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long x;
    double y;
    while (cin >> x >> y) {
        cout << round(sqrt((x * (y + 0.16) / 0.067))) << "\n";
    }
}
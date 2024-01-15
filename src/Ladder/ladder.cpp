#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long x, y; cin >> x >> y;
    cout << ceil(x / sin(y * M_PI / 180));
}
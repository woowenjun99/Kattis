#include <iostream>
using namespace std;

float computeArea(int height, int base) {
    return 0.5 * height * base;
}

int main() {
    int base, height;
    cin >> base >> height;
    cout << computeArea(height, base);
    return 0;
}
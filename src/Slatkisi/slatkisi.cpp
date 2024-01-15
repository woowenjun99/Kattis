#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long x;
    long y;
    cin >> x >> y;
    
    long smallestNote = long(pow(10, y));
    long remainder = x % smallestNote;
    if (remainder >= 0.5 * smallestNote) {
        cout << smallestNote + x - remainder;
    } else {
        cout << x - remainder;
    }
}
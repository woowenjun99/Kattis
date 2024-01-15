#include <iostream>
using namespace std;

int main() {
    long long x; cin >> x;
    int steps = 1;
    while (x != 1) {
        steps++;
        if (x % 2 == 1) x = 3 * x + 1;
        else x /= 2;
    }
    
    cout << steps << "\n";
}
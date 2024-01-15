#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((a - c >= 2) && (b - d >= 2)) {
        cout << 1;
    } else {
        cout << 0;
    }
}
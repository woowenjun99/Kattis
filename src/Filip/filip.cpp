#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    int a = 0;
    int b = 0;
    
    for (long i = 0; i < 3; i ++) {
        a = a * 10 + (x[2 - i] - '0');
        b = b * 10 + (y[2 - i] - '0');
    }
    
    if (b > a) {
        cout << b;
    } else {
        cout << a;
    }
}
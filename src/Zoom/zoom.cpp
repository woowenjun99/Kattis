#include <iostream>
using namespace std;

int main() {
    typedef unsigned long long ull; 
    ull x, y; cin >> x >> y;
    for (ull i = 0; i < x; i++) {
        ull z; cin >> z;
        if ((i + 1) % y == 0) {
            cout << z << " ";
        }
    }
}
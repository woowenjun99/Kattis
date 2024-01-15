#include <iostream>
using namespace std;

int main() {
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (!a || !b || !c) {
        cout << "NO";
        return 0;
    } else if (a + b + c < d || d < 3) {
        cout << "NO";
        return 0;
    } else {
        cout << "YES";
    }
}
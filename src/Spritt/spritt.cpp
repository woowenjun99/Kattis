#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int sum = 0;
    while (a--) {
        int c; cin >> c;
        sum += c;
    }
    
    if (sum <= b) cout << "Jebb";
    else cout << "Neibb";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = a - b;
    int y = b - c;
    
    if (x == y) {
        cout << "cruised";
    } else if ((a < b && b > c) || (a > b && b < c)) {
        cout << "turned";
    } else if ((a < b && b < c && x < y) || (a > b && b > c && y < x)) {
        cout << "braked";
    } else {
        cout << "accelerated";
    }
}
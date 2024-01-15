#include <iostream>
using namespace std;

int main() {
    long a, b;
    cin >> a >> b;
    if (a < b && b - a != 1) {
        cout << "Dr. Chaz will have " << b - a<< " pieces of chicken left over!";
    } else if (a < b && b - a == 1) {
        cout << "Dr. Chaz will have 1 piece of chicken left over!";
    } else if (a > b && a - b != 1) {
        cout << "Dr. Chaz needs " << a - b << " more pieces of chicken!";
    } else {
        cout << "Dr. Chaz needs 1 more piece of chicken!";
    }
}
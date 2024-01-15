#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int n;
    double w, h;
    cin >> n >> w >> h;
    int hypothenuse = square(w) + square(h);
    for (int i = 0; i < n; i ++) {
        int b;
        cin >> b;
        if (square(b) <= hypothenuse) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
}
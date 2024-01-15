#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    long counter = 0;
    
    for (int i = 0; i < x; i ++) {
        int a;
        cin >> a;
        if (y - a < 0) {
            break;
        }
        y -= a;
        counter ++;
    }
    
    cout << counter;
}
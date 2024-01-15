#include <iostream>
#include <vector>
using namespace std;

int main() {
    long score = 0;
    long position = 1;
    
    for (int i = 0; i < 5; i ++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a + b + c + d > score) {
            position = i + 1;
            score = a + b + c + d;
        }
    }
    
    cout << position << " " << score;
}
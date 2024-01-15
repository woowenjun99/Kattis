#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;
    int remaining = 0;
    
    for (int i = 0; i < N; i ++) {
        remaining += X;
        int used;
        cin >> used;
        remaining -= used;
    }
    
    cout << (remaining += X);
}
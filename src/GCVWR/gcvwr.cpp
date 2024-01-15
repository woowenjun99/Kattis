#include <iostream>
using namespace std;

int main() {
    long G, T, N;
    cin >> G >> T >> N;
    long towCapacity = (G - T) * 9 / 10;
    
    for (int i = 0; i < N; i ++) {
        long item;
        cin >> item;
        towCapacity -= item;
    }
    
    cout << towCapacity;
}
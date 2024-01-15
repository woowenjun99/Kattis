#include <iostream>
using namespace std;

int main() {
    int n, rodLength;
    cin >> n >> rodLength;
    
    for (int i = 1; i < n; i ++) {
        int newRod;
        cin >> newRod;
        rodLength += newRod - 1;
    }
    
    cout << rodLength;
}
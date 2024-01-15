#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long sum = 0;
    
    for (int i = 0; i < b; i++) {
        int c;
        cin >> c;
        sum += c;
    }
    
    long remaining = a - b;
    cout << (sum + (remaining * -3)) / (a * 1.0) << " ";
    cout << (sum + (remaining * 3)) / (a * 1.0) << " ";
}
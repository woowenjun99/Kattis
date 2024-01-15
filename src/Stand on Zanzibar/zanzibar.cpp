#include <iostream>
using namespace std;

int main() {
    long T;
    cin >> T;
    
    for (long i = 0; i < T; i ++) {
        long current;
        cin >> current;
        long sum = 0;
        
        long previous = 1;
        while (current != 0) {
            if (current > 2 * previous) {
                sum += (current - 2 * previous);
            }
            
            // Read in the new value and set previous as current
            previous = current;
            cin >> current;
        }
        cout << sum << "\n";
    }
}
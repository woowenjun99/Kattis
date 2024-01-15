#include <iostream>
using namespace std;

int main() {
    long x;
    cin >> x;
    while (x != -1) {
        long previousHours = 0;
        long totalMiles = 0;

        for (int i = 0; i < x; i ++) {
            long speed, hours;
            cin >> speed >> hours;
            totalMiles = totalMiles + ((hours - previousHours) * speed);
            previousHours = hours;
        }
        
        cout << totalMiles << " miles" << endl;
        cin >> x;
    }
}
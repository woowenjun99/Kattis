#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, p, n;
    cin >> m >> p >> n;
    double percentage = p / 100.0;
    int counter = 0;
    int target = m;
    
    for (int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        
        if (x >= target) {
            int net = x - target;
            double toBeSubtracted = net * percentage;
            target = int(ceil(m - toBeSubtracted));
            counter ++;
        } else {
            int net = target - x;
            double toBeAdded = net * percentage;
            target = int(ceil(m + toBeAdded));
        }
    }
    cout << counter;
}
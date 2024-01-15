#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> timingPressed(x);
    
    for (int i = 0; i < x; i ++) {
        int y;
        cin >> y;
        timingPressed[i] = y;
    }
    
    if (x % 2) {
        cout << "still running";
    } else {
        long sum = 0;
        for (int i = 1; i < timingPressed.size(); i += 2) {
            sum += (timingPressed[i] - timingPressed[i - 1]);
        }
        cout << sum;
    }
}
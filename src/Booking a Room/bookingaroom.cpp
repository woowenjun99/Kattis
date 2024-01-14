#include <iostream>
#include <vector>
using namespace std;

int main() {
    long x, y;
    cin >> x >> y;
    vector<bool> rooms(x, false);
    
    for (int i = 0; i < y; i++) {
        long z;
        cin >> z;
        rooms[z - 1] = true;
    }
    
    bool booked = false;
    for (int i = 0 ; i < x; i ++) {
        if (rooms[i] == false) {
            cout << i + 1;
            booked = true;
            break;
        }
    }
    
    if (!booked) {
        cout << "too late";
    }
}
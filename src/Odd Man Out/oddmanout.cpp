#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        int cases;
        cin >> cases;
        unordered_map<unsigned long long, bool> guests;
        for (int j = 0; j < cases; j ++) {
            unsigned long long guest;
            cin >> guest;
            if (guests.find(guest) == guests.end()) {
                guests.insert(pair<unsigned long long, bool>(guest, false));
            } else {
                guests.find(guest)->second = true;
            }
        }
        
        for (unordered_map<unsigned long long, bool>::iterator it = guests.begin(); it != guests.end(); ++it) {
            if (it->second == false) {
                cout << "Case #" << i + 1 << ": " << it ->first << endl;
            }
        }
    }
}
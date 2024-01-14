#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<long, bool> length;
    unordered_map<long, bool> width;
    
    for (int i = 0; i < 3; i ++) {
        long l, w;
        cin >> l >> w;
        
        if (length.find(l) == length.end()) {
            length.insert(pair<long, bool>(l, false));
        } else {
            length.find(l)->second = true;
        }
        
        
        if (width.find(w) == width.end()) {
            width.insert(pair<long, bool>(w, false));
        } else {
            width.find(w)->second = true;
        }
    }
    
    for (unordered_map<long, bool>::iterator it = length.begin(); it != length.end(); ++it) {
        if (it->second == false) {
            cout << it->first << " ";
            break;
        }
    }
    
    for (unordered_map<long, bool>::iterator it = width.begin(); it != width.end(); ++it) {
        if (it->second == false) {
            cout << it->first;
            break;
        }
    }
}
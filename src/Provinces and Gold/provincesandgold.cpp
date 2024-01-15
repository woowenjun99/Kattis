#include <iostream>
using namespace std;

int main() {
    long g, s, c;
    cin >> g >> s >> c;
    long bp = (g * 3) + (s * 2) + c;
    
    string victory;
    string treasure;
    
    if (bp >= 8) {
        victory = "Province";
    } else if (bp >= 5) {
        victory = "Duchy";
    } else if (bp >= 2) {
        victory = "Estate";
    }
    
    if (bp >= 6) {
        treasure = "Gold";
    } else if (bp >= 3) {
        treasure = "Silver";
    } else {
        treasure = "Copper";
    }
    
    if (victory.size() > 0) {
        cout << victory << " or " << treasure;
    } else {
        cout << treasure;
    }
}
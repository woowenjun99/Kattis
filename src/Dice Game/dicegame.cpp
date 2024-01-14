#include <iostream>
using namespace std;

int main() {
    int gunnar = 0, emma = 0;
    for (int i = 0; i < 4; ++i) {
        int s; cin >> s; gunnar += s;
    }
    
    for (int i = 0; i < 4; ++i) {
        int s; cin >> s; emma += s;
    }
    
    if (emma == gunnar) cout << "Tie";
    else if (emma > gunnar) cout << "Emma";
    else cout << "Gunnar";
}
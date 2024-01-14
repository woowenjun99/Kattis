#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<long> positions;
    
    for (int i = 0; i < 5; i ++) {
        string str;
        getline(cin, str);
        
        if (str.find("FBI") != str.npos) {
            positions.push_back(i);
        }
    }
    
    if (positions.size() > 0) {
        for (long x: positions) {
            cout << x + 1 << " ";
        }
    } else {
        cout << "HE GOT AWAY!";
    }
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    long sum = 0;
    vector<long> corresponding = {4, 3, 2, 7, 6, 5, 0, 4, 3, 2, 1};
    for (int i = 0; i < 11; i ++) {
        if (str[i] == '-') {
            continue;
        }
        
        sum += (int(str[i] - '0') * corresponding[i]);
    }
    
    if (sum % 11 == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
}
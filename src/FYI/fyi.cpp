#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    if (str[0] == '5' && str[1] == '5' && str[2] == '5') {
        cout << 1;
    } else {
        cout << 0;
    }
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); i ++) {
        if (str[i] == ')') {
            if (str[i - 1] == ':' || str[i - 1] == ';') {
                cout << i - 1 << endl;
                continue;
            }
            
            if (str[i - 1] == '-' && (str[i -2] == ':' || str[i - 2] == ';')) {
                cout << i - 2 << endl;
            }
        }
    }
}
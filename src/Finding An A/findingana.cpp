#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    bool firstAFound = false;
    
    for (int i = 0; i < str1.size(); i ++) {
        if (firstAFound) {
            cout << str1[i];
            continue;
        }
        
        if (str1[i] != 'a') {
            continue;
        }
        
        firstAFound = true;
        cout << str1[i];
    }
}
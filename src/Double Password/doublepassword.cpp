#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;
    
    int types = 1;
    for (int i = 0; i < 4; i ++) {
        if (str1[i] != str2[i]) {
            types *= 2;
        }
    }
    
    cout << types;
}
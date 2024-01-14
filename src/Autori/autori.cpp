#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    string str2 = "";
    
    for (int i = 0; i < str1.size(); i ++) {
        if (i == 0) {
            str2.push_back(str1[i]);
            continue;
        }
        
        if (str1[i - 1] == '-') {
            str2.push_back(str1[i]);
        }
    }
    
    cout << str2;
}
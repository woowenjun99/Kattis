#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    string str2 = "";
    
    for (int i = 0; i < str1.size(); i++) {
        str2.push_back(str1[i]);
        if (str1[i] == 'e') {
            str2.push_back('e');
        }
    }
    cout << str2;
}
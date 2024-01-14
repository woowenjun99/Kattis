#include <iostream>
#include <string>
using namespace std;

int main() {
    long x;
    cin >> x;
    
    for (int i = 0; i < x; i ++) {
        string str1;
        string str2;
        cin >> str1;
        cin >> str2;
        cout << str1 << "\n" << str2 << "\n";
        
        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] == str2[i]) {
                cout << ".";
            } else {
                cout << "*";
            }
        }
        
        cout << "\n";
    }
}
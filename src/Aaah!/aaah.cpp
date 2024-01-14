#include <string>
#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;
    
    cin >> str1 >> str2;
    
    if (str1.size() < str2.size()) {
        cout << "no";
    } else {
        cout << "go";
    }
}
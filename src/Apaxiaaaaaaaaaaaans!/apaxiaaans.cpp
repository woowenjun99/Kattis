#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
    for (long i = 0; i < str.size(); i++) {
        if (str[i] == str[i + 1]) {
            continue;
        }
        cout << str[i];
    }
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    bool hiss = false;
    string str; cin >> str;
    for (long i = 0; i < str.size() - 1; ++i) {
        if (str[i] == 's' && str[i + 1] == 's') {
            hiss = true;
            break;
        }
    }
    if (hiss) {
        cout << "hiss";
    } else {
        cout << "no hiss";
    }
}
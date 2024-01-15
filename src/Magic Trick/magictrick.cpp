#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; bool letters[26] = {false}; cin >> a;
    for (int i = 0; i < a.size(); ++i) {
        if (letters[a[i] - 'a']) {
            cout << 0;
            return 0;
        }
        letters[a[i] - 'a'] = true;
    }
    cout << 1;
    return 0;
}
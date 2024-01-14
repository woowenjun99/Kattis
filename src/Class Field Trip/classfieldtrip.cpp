#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string c = a + b;
    sort(c.begin(), c.end());
    cout << c;
    return 0;
}
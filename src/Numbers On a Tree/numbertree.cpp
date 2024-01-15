#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    long n; string str; cin >> n;
    long start = pow(2, n + 1) - 1;
    cin.ignore();

    long ptr = 1;
    getline(cin, str);
    for (long i = 0; i < str.size(); ++i) {
        if (str[i] == 'L') ptr *= 2;
        else ptr = ptr * 2 + 1;
    }

    cout << start - ptr + 1 << endl; 
    return 0;
}
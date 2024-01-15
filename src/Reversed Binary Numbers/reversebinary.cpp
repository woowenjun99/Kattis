#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> s;

string atob(unsigned long long x) {
    string sum;

    // TIME COMPLEXITY: O(log N)
    while (x > 0) {
        if (x % 2) sum.push_back('1');
        else sum.push_back('0');
        x /= 2;
    }

    while (sum.size()) {
        s.push(sum.back());
        sum.pop_back();
    }

    while (not s.empty()) {
        sum.push_back(s.top());
        s.pop();
    }

    return sum;
}

int main() {
    unsigned long long x; cin >> x;

    // STORING THE NUMBERS IN STRING AND SWAPPING IT
    string str = atob(x);
    cout << stoull(str, 0, 2);
    return 0;
}
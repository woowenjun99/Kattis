#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, counter = 1;
    while (cin >> n, n != 0) {
        cout << "SET " << counter << "\n";
        
        stack<string> s;
        for (int j = 0; j < n; ++j) {
            string name; cin >> name;
            if (j % 2 == 1) {
                s.push(name);
                continue;
            }
            cout << name << "\n";
        }
        
        while (!s.empty()) {
            cout << s.top() << "\n";
            s.pop();
        }
        counter++;
    }
    return 0;
}
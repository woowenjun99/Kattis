#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        
        if (s.empty()) {
            s.push(a);
            continue;
        } else if ((s.top() + a) % 2 == 0) {
            s.pop();
            continue;
        }
        s.push(a);
    }

    cout << s.size() << endl;
    return 0;
}
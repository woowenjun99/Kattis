#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long> groups(m);
    
    for (vector<long>::iterator i = groups.begin(); i != groups.end(); ++i) {
        cin >> *i;
    }
    
    for (int i = 0; i < groups.size(); i ++) {
        if (n >= groups[i]) {
            n -= groups[i];
            m--;
            continue;
        }
        break;
    }
    
    cout << m;
}
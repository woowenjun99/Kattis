#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n; cin >> n;
    vector<int> nodes;
    for (ll i = 0; i < n; ++i) {
        int x; cin >> x;
        nodes.push_back(x);
    }
    
    ll minimum_position = min_element(nodes.begin(), nodes.end()) - nodes.begin();
    ll sum = 0;
    for (ll i = 0; i < nodes.size(); ++i) {
        if (i != minimum_position) sum += nodes[i] + nodes[minimum_position];
    }

    cout << sum;

    return 0;
}
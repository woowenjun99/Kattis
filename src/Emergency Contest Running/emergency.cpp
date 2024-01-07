#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n, k; cin >> n >> k;
    if (n <= k) {
        cout << n - 1 << "\n";
        return 0;
    }

    ll distance_from_k = (n - 1) % k, distance_from_zero_to_k = k;
    cout << (distance_from_zero_to_k + distance_from_k + (n < 2 * k ? 0 : 1)) << "\n";
    return 0;
}
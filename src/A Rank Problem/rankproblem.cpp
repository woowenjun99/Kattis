#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    long n, m; cin >> n >> m;
    vector<int> order(n);
    iota(order.begin(), order.end(), 0);

    while (m--) {
        char dummy1, dummy2; int Ti, Tj; cin >> dummy1 >> Ti >> dummy2 >> Tj;
        Ti--; Tj--;
        int idx_i = find(order.begin(), order.end(), Ti) - order.begin();
        int idx_j = find(order.begin(), order.end(), Tj) - order.begin();

        if (idx_i > idx_j) { // a 'weaker' team beats a 'stronger' team
            order.erase(find(order.begin(), order.end(), Tj));
            order.insert(order.begin() + idx_i, Tj);
        }
    }

    for (auto& Ti : order)
        cout << 'T' << (Ti+1) << ' '; // go to 1-based
    cout << '\n';
    return 0;
}
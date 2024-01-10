#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    ull x; cin >> x;
    vector<ull> cards(x); for (auto &card: cards) cin >> card;
    sort(cards.begin(), cards.end());
    ull y; cin >> y;
    for (ull k = 0; k < y; ++k) {
        ull lower, upper; cin >> lower >> upper;
        auto low = lower_bound(cards.begin(), cards.end(), lower) - cards.begin();
        auto high = upper_bound(cards.begin(), cards.end(), upper) - cards.begin();
        cout << high - low << endl;
    }
}
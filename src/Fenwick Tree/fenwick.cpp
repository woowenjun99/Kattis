#define LSOne(S) (S & -(S))
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

class FenwickTree {
    private:
        vll ft;
    public:
        ll rsq(int j) {
            ll sum = 0;
            for (; j; j -= LSOne(j)) sum += ft[j];
            return sum; 
        }

        void update(int i, ll v) {
            for (; i < (int)ft.size(); i += LSOne(i)) ft[i] += v;
        }

        FenwickTree(ll m) { ft.assign(m + 1, 0); }
};

void solve() {
    ll n, q;
    std::cin >> n >> q;
    FenwickTree ft{n};
    while (q--) {
        char c;
        int i ;
        std::cin >> c >> i;
        if (c == '+') {
            long long j;
            std::cin >> j;
            ft.update(i + 1, j);
        } else std::cout << ft.rsq(i) << "\n";
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
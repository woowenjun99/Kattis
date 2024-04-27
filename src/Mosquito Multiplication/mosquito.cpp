#include <iostream>

void solve() {
    int m, p, l, e, r, s, n;
    while (std::cin >> m >> p >> l >> e >> r >> s >> n) {
        int new_m, new_p, new_l;
        while (n--) {
            new_l = m * e;
            new_p = l / r;
            new_m = p / s;
            l = new_l;
            p = new_p;
            m = new_m;
        }
        std::cout << m << std::endl;
    }
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
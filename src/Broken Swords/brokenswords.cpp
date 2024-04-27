#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::vector<std::string> v(n);
    for (auto &s: v) std::cin >> s;

    int tb = 0, lr = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i][0] == '0') tb++;
        if (v[i][1] == '0') tb++;
        if (v[i][2] == '0') lr++;
        if (v[i][3] == '0') lr++;
    }

    int bottleneck = tb > lr ? lr : tb;
    bottleneck -= bottleneck % 2;
    std::cout << bottleneck / 2 << " " << tb - bottleneck <<  " " << lr - bottleneck << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
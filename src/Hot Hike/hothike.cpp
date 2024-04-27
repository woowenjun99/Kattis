#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> temperatures(n);
    for (auto &temperature: temperatures) std::cin >> temperature;

    int d = 1, t = temperatures[0] > temperatures[2] ? temperatures[0] : temperatures[2];
    for (int i = 1; i < n - 2; ++i) {
        int maximum_hiking_temperature = temperatures[i] > temperatures[i + 2] ? temperatures[i] : temperatures[i + 2];
        if (maximum_hiking_temperature >= t) continue;
        t = maximum_hiking_temperature;
        d = i + 1;
    }
    std::cout << d << " " << t << "\n";

}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
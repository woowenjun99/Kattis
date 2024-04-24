#include <cmath>
#include <iostream>
#include <vector>

void solve() {
    unsigned long long n; 
    unsigned long long points = 0;
    std::cin >> n;

    // We need the external while loop because the inner for-loop
    // might not reduce n to 1.
    while (n > 1) {
        // Check whether the current value of n is prime. If it is, 
        // we can return 1 + points immediately.
        bool is_prime = true;
        std::vector<int> factors;
        for (unsigned long long i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                is_prime = false;
                factors.push_back(i);
            }
        }
        if (is_prime) {
            std::cout << points + 1 << std::endl;
            return;
        }

        // Brute force adding
        for (unsigned long long i = 0; i < factors.size(); ++i) {
            while (n > 1 and n % factors[i] == 0) {
                points++;
                n /= factors[i];
            }
        }
    }

    std::cout << points << std::endl;
}

int main(void) {
    freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
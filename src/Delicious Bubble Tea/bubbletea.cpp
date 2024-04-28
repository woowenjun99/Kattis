#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n, m;
    std::cin >> n;
    std::vector<int> prices_of_bubble_teas(n);
    for (auto &price: prices_of_bubble_teas) std::cin >> price;
    std::cin >> m;
    std::vector<int> prices_of_bubble_tea_toppings(m);
    for (auto &price: prices_of_bubble_tea_toppings) std::cin >> price;
    for (int i = 0; i < n; ++i) {
        int k, cheapest_topping = 1e9;
        std::cin >> k;
        for (int j = 0; j < k; ++j) {
            int topping;
            std::cin >> topping;
            if (prices_of_bubble_tea_toppings[topping - 1] < cheapest_topping) {
                cheapest_topping = prices_of_bubble_tea_toppings[topping - 1];
            }
        }
        prices_of_bubble_teas[i] += cheapest_topping;
    }

    int minimum_price = *std::min_element(prices_of_bubble_teas.begin(), prices_of_bubble_teas.end());
    int money;
    std::cin >> money;
    if (money / minimum_price <= 1) std::cout << 0 << std::endl;
    else std::cout << money / minimum_price - 1 << std::endl;
}

int main(void) {
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
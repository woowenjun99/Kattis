#include <iostream>

int main() {
    int m, n;
    std::string a, b;
    std::cin >> n >> m >> a >> b;
    
    a = a.insert(0, " ", m - n);
    for (int i = m - 1; i >= n; i--) {
        a[i - n] = b[i] - a[i];
        a[i - n] += (a[i - n] < 0 ? 123 : 97);
    }
    std::cout << a;
}
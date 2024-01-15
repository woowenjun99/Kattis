#include <iostream>
using namespace std;

unsigned long long sum(unsigned long long n) {
    if (n == 1) {
        return 1;
    } 
    
    if (n % 2 == 0) {
        return sum(n/2) + n;
    }
    
    return sum(3 * n + 1) + n;
}

int main() {
    unsigned long long n;
    scanf("%llu", &n);
    cout << sum(n);
}
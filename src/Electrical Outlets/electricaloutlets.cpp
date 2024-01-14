#include <iostream>
using namespace std;

int main() {
    long n, k;
    cin >> n;
    
    for (int i = 0; i < n; i ++) {
        int k;
        cin >> k;
        int sum = 0;
        for (int j = 0; j < k; j ++) {
            int v;
            cin >> v;
            sum += v;
        }
        sum -= (k - 1);
        cout << sum << endl;
    }
}
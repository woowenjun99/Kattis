#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n; cin >> n;
    unordered_set<int> nums;
    for (int i = 0; i < n; ++i) {
        int m; cin >> m; nums.insert(m);
    }

    for (int i = 0; i < n - 1; i++) {
        int m; cin >> m; 
        nums.erase(m);
    }

    cout << *nums.begin();
}
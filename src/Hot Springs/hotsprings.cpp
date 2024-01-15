#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
stack<int> s;

int main() {
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<int> nums(n); 
    for (int &num: nums) cin >> num;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() / 2; ++i) {
        s.push(nums[i]);
        s.push(nums[nums.size() - i - 1]);
    }

    if (nums.size() % 2 == 1) s.push(nums[nums.size() / 2]);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
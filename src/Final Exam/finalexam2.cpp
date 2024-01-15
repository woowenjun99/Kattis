#include <iostream>
#include <vector>
using namespace std;

int main() {
    long x, answer = 0; cin >> x;
    vector<char> nums(x);

    for (long i = 0; i < x; ++i) cin >> nums[i];
    for (long i = 0; i < x - 1; ++ i) {
        if (nums[i] == nums[i + 1]) {
            answer++;
        }
    }
    cout << answer;
}
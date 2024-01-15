#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long> nums(5);
    for (long i = 0; i < 5; ++i) cin >> nums[i];
    for (long i = 0; i < 5; ++i) {
        for (long j = 0; j < 4 - i; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                for (long k: nums) cout << k << " ";
                cout << endl;
            }
        }
    }
}
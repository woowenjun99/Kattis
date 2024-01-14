#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
typedef unsigned long long ull;
typedef vector<ull> vull;

void doFive(vull &nums) {
    sort(nums.begin(), nums.end());
    for (ull i : nums) {
        if (i >= 100 and i <= 999) cout << i <<  " ";
    }
}

void doFour(vull &nums) {
    sort(nums.begin(), nums.end());
    if (nums.size() % 2 == 1) {
        cout << nums[nums.size() / 2];
        return;
    }

    cout << nums[nums.size() / 2 - 1] << " " << nums[nums.size() / 2];
}

void doThree(vull &nums) {
    unordered_map<ull, long> tracker;
    for (ull i : nums) {
        if (tracker.find(i) != tracker.end()) {
            tracker.find(i)->second++;
            continue;
        }
        tracker.insert(pair<ull, long>(i, 1));
    }

    long times = nums.size() / 2, counter = 0;
    for (unordered_map<ull, long>::iterator it = tracker.begin(); it != tracker.end(); ++it) {
        if (it->second > times) {
            cout << it->first << " ";
            counter++;
        }
    }

    if (!counter) cout << -1;
}

// Time Complexity: O(N)
void doOne(vull &nums) {
    unordered_set<ull> location;
    bool found = false;

    for (ull i : nums) {
        if (location.find(7777 - i) != location.end()) {
            cout << "Yes";
            found = true;
            break;
        }
        location.insert(i);
    }

    if (!found) cout << "No";
}

// Time Complexity: O(N)
void doTwo(vull &nums) {
    unordered_set<ull> location;
    bool duplicate = false;
    for (ull i : nums) {
        if (location.find(i) != location.end()) {
            cout << "Contains duplicate";
            duplicate = true;
            break;
        }
        location.insert(i);
    }

    if (!duplicate) cout << "Unique";
}

int main() {
    long n, t; cin >> n >> t;
    vull nums(n);
    for (long i = 0; i < n; i ++) cin >> nums[i];

    if (t == 1) {
        doOne(nums);
    } else if (t == 2) {
        doTwo(nums);
    } else if (t == 3) {
        doThree(nums);
    } else if (t == 4) {
        doFour(nums);
    } else {
        doFive(nums);
    }
    return 0;
}
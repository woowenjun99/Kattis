#include <iostream>
#include <string>
#include <set>
using namespace std;

multiset<long> nums;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long N, Q; cin >> N >> Q;

    // Read in the input
    for (long i = 0; i < N; ++i) {
        long input; cin >> input;
        nums.insert(input);
    }

    for (long i = 0; i < Q; ++i) {
        int instruction, value; cin >> instruction >> value;
        if (instruction == 1) {
            set<long>::iterator it = nums.upper_bound(value);
            if (it == nums.end()) {
                cout << -1 << "\n";
                continue;
            }
            cout << *it << "\n";
            nums.erase(it);
        } else if (instruction == 2) {
            set<long>::iterator it = nums.lower_bound(value);

            // Handling when it == nums.end()
            if (it == nums.end()) {
                set<long>::iterator second = it;
                second--;
                if (*second > value) {
                    cout << -1 << "\n";
                    continue;
                }
                cout << *second << endl;
                nums.erase(second);
                continue;
            }

            if (*it > value && it == nums.begin()) {
                cout << -1 << "\n";
                continue;
            }
            
            if (*it > value) it--;
            cout << *it << "\n";
            nums.erase(it);
        }
    }
}
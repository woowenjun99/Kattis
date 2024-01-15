#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        bool jollyJumpers(vector<int> &inputs) {
            vector<bool> used(inputs.size() - 1, false);
            for (int i = 1; i < inputs.size(); ++i) {
                int difference = abs(inputs[i] - inputs[i - 1]) - 1;
                if (difference >= used.size() or difference < 0 or used[difference]) return false;
                used[difference] = true;
            }
            return true;
        }
};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    while (cin >> n) {
        vector<int> inputs(n);
        for (auto &input: inputs) cin >> input;
        Solution s;
        if (s.jollyJumpers(inputs)) {
            cout << "Jolly\n";
        } else {
            cout << "Not jolly\n";
        }
    }

    return 0;
}
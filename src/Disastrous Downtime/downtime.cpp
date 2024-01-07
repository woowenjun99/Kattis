#include <cmath>
#include <iostream>
#include <queue>
using namespace std;

class Solution {
    public:
        int disastrousDowntime(vector<int> &inputs, int k) {
            int minimum_server_needed = 1;
            queue<int> q;

            for (auto input: inputs) {
                while (not q.empty() and q.front() <= input) q.pop();
                q.push(input + 1000);
                if (ceil(1.0 * q.size() / k) > minimum_server_needed) {
                    minimum_server_needed = ceil(1.0 * q.size() / k);
                }
            }

            return minimum_server_needed;
        }
};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    vector<int> inputs(n);
    for (int &input: inputs) cin >> input;

    Solution s;
    cout << s.disastrousDowntime(inputs, k) << "\n";
    return 0;
}
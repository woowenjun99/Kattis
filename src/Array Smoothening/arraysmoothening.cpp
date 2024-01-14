#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

priority_queue<int> pq;
unordered_map<int, int> mappers;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    int n, k; cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (mappers.find(a) == mappers.end()) {
            mappers.insert(pair<int, int>(a, 1));
            continue;
        }
        mappers.find(a)->second++;
    }

    for (auto &[k, v]: mappers) pq.push(v);
    for (int i = 0; i < k; ++i) {
        int new_sum = pq.top() - 1;
        pq.pop();
        pq.push(new_sum);
    }

    cout << pq.top();
    return 0;
}
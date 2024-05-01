#include <iostream>
#include <map>
#include <queue>
#include <set>
using namespace std;
typedef long long ll;
map<ll, priority_queue<pair<ll, ll>>> mappers;

void readInput(long a) {
    for (ll i = 1; i <= a; ++i) {
        ll p, v; cin >> p >> v; 
        mappers[v].push(make_pair(-p, i));
        if (mappers[v].size() > 10) mappers[v].pop();
    }
}

void transferBestItems() {
    priority_queue<pair<ll, ll>> cloned = mappers.begin()->second;
    for (auto it = mappers.begin(); it != mappers.end(); ++it) {
        if (it == mappers.begin()) continue;

        while (not cloned.empty()) {
            it->second.push(cloned.top());
            cloned.pop();
        }

        while (it->second.size() > 10) it->second.pop();
        cloned = it->second;
    }
}

void reversePriorityQueue() {
    for (auto it = mappers.begin(); it != mappers.end(); ++it) {
        priority_queue<pair<ll, ll>> pq;
        while (not it->second.empty()) {
            auto &[k, v] = it->second.top();
            pq.push(make_pair(-k, -v));
            it->second.pop();
        }
        it->second = pq;
    }    
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // READING IN INPUT
    ll a; cin >> a;
    readInput(a);

    // DATA PROCESSING
    transferBestItems();
    reversePriorityQueue();

    ll Q; cin >> Q;
    for (ll i = 0; i < Q; ++i) {
        ll x, k; cin >> x >> k;
        auto it = mappers.upper_bound(x);
        if (it == mappers.end() and mappers.rbegin()->first > x) {
            cout << -1 << "\n";
            continue;
        }

        if (it == mappers.begin() and mappers.begin()->first > x) {
            cout << -1 << "\n";
            continue;
        }
            
        it--;
        priority_queue<pair<ll, ll>> cloned = it->second;
        while (not cloned.empty() and k) {
            cout << -cloned.top().second << " ";
            cloned.pop();
            k--;
        }

        cout << "\n";
    }

    return 0;
}
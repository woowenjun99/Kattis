#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, q; cin >> n >> q;
    int level = 0;
    int restartValue = 0;
    unordered_map<int, stack<pair<int, int>>> mappers;
    
    while (q--) {
        string command; cin >> command;
        if (command == "SET") {
            int i, x; cin >> i >> x;
            mappers[i].push({x, level});
        } else if (command == "RESTART") {
            int x; cin >> x;
            level++;
            restartValue = x;
        } else {
            int i; cin >> i;
            if (mappers.find(i) == mappers.end() or mappers[i].top().second != level) {
                cout << restartValue << "\n";
            } else {
                cout << mappers[i].top().first << "\n";
            }
        }
    }
    return 0;
}
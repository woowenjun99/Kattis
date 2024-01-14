#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    unordered_map<string, int> mappers;
    unordered_set<string> won;

    int a, b, c, winners = 0; cin >> a >> b >> c;
    for (int i = 0; i < a; ++i) {
        string name; cin >> name;
        mappers[name] = 0;
    }

    for (int i = 0; i < c; ++i) {
        string name; int score; cin >> name >> score;
        mappers[name] += score;
        if (mappers[name] >= b && won.find(name) == won.end()) {
            cout << name << " wins!\n";
            won.insert(name);
            winners++;
        }
    }

    if (!winners) cout << "No winner!";
    return 0;
}
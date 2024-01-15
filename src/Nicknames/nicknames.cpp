#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    unordered_map<string, int> mappers;

    int x; cin >> x;
    for (int i = 0; i < x; ++i) {
        string name; cin >> name;
        int size_of_name = name.size() <= 10 ? name.size() : 10;
        for (int j = 0; j < size_of_name; ++j) {
            string str2 = name.substr(0, j + 1);
            if (mappers.find(str2) == mappers.end()) {
                mappers[str2] = 1;
                continue;
            }
            mappers[str2]++;
        }
    }

    int y; cin >> y;
    for (int i = 0; i < y; ++i) {
        string nickname; cin >> nickname;
        if (mappers.find(nickname) == mappers.end()) {
            cout << 0 << "\n";
            continue;
        }
        cout << mappers[nickname] << "\n";
    }
    return 0;
}
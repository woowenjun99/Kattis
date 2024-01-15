#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ull, ull> pull;

set<pair<ull, ull>> players;

struct Object {
    ll x, y, player;
    ull times;
};

ull calculateDistance(Object object1, Object object2) {
    ll x1 = object1.x, x2 = object2.x, y1 = object1.y, y2 = object2.y;
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<Object> status(0);
    ll a, b; cin >> a >> b; 

    // Push the object into the vector
    for (ll i = 0; i < b; ++i) {
        Object object; cin >> object.player >> object.x >> object.y >> object.times;
        status.push_back(object);
    }

    // Sort based on the time
    stable_sort(status.begin(), status.end(), [](Object a, Object b) {
        return a.times < b.times;
    });

    for (ull i = 0; i < status.size(); ++i) {
        for (ull j = i + 1; j < status.size(); ++j) {
            // Check the difference to see whether it is more than 10. If yes, break
            ll difference = status[i].times - status[j].times;
            if (abs(difference) > 10) break;
            Object object1 = status[i], object2 = status[j];

            // Check if the 2 objects are from the same player or the distance is more than 1000000. If yes, skip.
            if (object1.player == object2.player || calculateDistance(object1, object2) > 1000000) continue;

            // Check whether the set is unique
            if ((players.find(pull(object1.player, object2.player)) == players.end()) && (players.find(pull(object2.player, object1.player)) == players.end())) {
                if (object1.player > object2.player) players.insert(pull(object2.player, object1.player));
                else players.insert(pull(object1.player, object2.player));
            }
        }
    }

    // Transfer everything to a new array
    vector<pull> newPlayers(players.size());
    for (auto player: players) newPlayers.push_back(player);

    // Sort based on the first player first then the second
    stable_sort(newPlayers.begin(), newPlayers.end(), [](pull a, pull b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });
   
    cout << players.size() << "\n";
    for (pull player: players) cout << player.first << " " << player.second << "\n";
}
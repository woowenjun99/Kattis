#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;
unordered_map<string, queue<long>> mappers;

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long N; cin >> N;
    for (long i = 0; i < N; ++i) {
        string str; cin >> str;
        mappers[str].push(i + 1);
    }

    long current_index = 0, cards_drawn = 0;

    while (current_index != N) {
        long largest_jump = 0;
    
        // ITERATE THROUGH THE HASH MAP AND FIND THE COLOUR WITH BIGGEST JUMP. 
        // TIME COMPLEXITY: O(1)
        for (auto &[k, v]: mappers) {
            if (not v.empty() and v.front() > largest_jump) largest_jump = v.front();
        }

        current_index = largest_jump;
        cards_drawn += 1;
        for (auto &[k, v]: mappers) {
            while (not v.empty() and v.front() <= largest_jump) v.pop();
        }
    }

    cout << cards_drawn << "\n";
    return 0;
}
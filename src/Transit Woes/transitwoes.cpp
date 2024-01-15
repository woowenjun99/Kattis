#include <iostream>
#include <vector>
using namespace std;

int main() {
    int start, end, rides; cin >> start >> end >> rides;
    int current = 0;
    vector<int> walking_time(rides + 1);
    vector<int> bus_time(rides);
    vector<int> intervals(rides);
    for (auto &time: walking_time) cin >> time;
    for (auto &time: bus_time) cin >> time;
    for (auto &time: intervals) cin >> time;
    
    for (int i = 0; i < rides; ++i) {
        current += walking_time[i];
        if (current % intervals[i] != 0) current += intervals[i] - (current % intervals[i]);
        current += bus_time[i];
        if (current > end) {
            cout << "no";
            return 0;
        }
    }

    if (current + walking_time[rides] > end) cout << "no";
    else cout << "yes";
    return 0;
}
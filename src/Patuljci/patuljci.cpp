#include <iostream>
#include <numeric>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<int, int> mappers;

int main() {
    vector<int> hats(9);
    for (int &hat: hats) cin >> hat;
    int sum = accumulate(hats.begin(), hats.end(), 0);
    // Two Sum with 9 digits
    sum -= 100;

    int position_1, position_2;
    for (int i = 0; i < 9; ++i) {
        if (mappers.find(hats[i]) == mappers.end()) {
            int difference = sum - hats[i];
            mappers[difference] = i;
            continue;
        }
        position_1 = mappers[hats[i]], position_2 = i;
        break;
    }

    for (int i = 0; i < 9; ++i) {
        if (i != position_1 && i != position_2) cout << hats[i] << endl;
    }
    return 0;
}
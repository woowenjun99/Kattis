#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<char>> vc;
bool objective_met = false;

void checkPrint(vc field, long n) {
    vector<long> y_axis(n, 0);
    for (long i = 0; i < n; ++i) {
        for (long j = 0; j < 10; ++j) {
            if (field[j][i] == 'A') y_axis[i] = j;
        }
    }

    vector<pair<long, long>> mee_siam;
    for (long i = 1; i < n; ++i) {
        while (i < n and y_axis[i] >= y_axis[i - 1]) ++i;
        if (i < n) {
            mee_siam.push_back({i - 1, 0});
            while (i < n and y_axis[i] <= y_axis[i - 1]) ++i;
            mee_siam.back().second = i - 1;
        }
    }
    cout << mee_siam.size() << "\n";
    for (auto &i: mee_siam) cout << i.first << " " << i.second - i.first << "\n"; 
}

void DFS(vc &field, long n, long y, long x, vector<vector<bool>> &visited) {
    if (y >= 10 or y < 0 or field[y][x] == 'X' or objective_met or visited[y][x]) return;
    if (x == n - 1 and field[y][x] == '.' and not objective_met) {
        visited[y][x] = true;
        objective_met = true;
        field[y][x] = 'A';
        return;
    }

    if (not objective_met) {
        field[y][x] = 'A';
        visited[y][x] = true;
    }
    
    if (not objective_met and x < n - 1 and (y == 9 or y == 0)) DFS(field, n, y, x + 1, visited);
    if (not objective_met and x < n - 1 and y > 0) DFS(field, n, y - 1, x + 1, visited);
    if (not objective_met and x < n - 1 and y < 10) DFS(field, n, y + 1, x + 1, visited);
    if (not objective_met) field[y][x] = '.';
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long n; cin >> n;
    vc field(10, vector<char>(n));
    for (long i = 0; i < 10; ++i) {
        for (long j = 0; j < n; ++j) cin >> field[i][j];
    }

    vector<vector<bool>> visited(10, vector<bool>(n, false));

    // FINDING A POSSIBLE SOLUTION FOR THE GAME
    field[9][0] = 'A';
    DFS(field, n, 9, 0, visited);

    checkPrint(field, n);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<char>> &pond, long i, long j) {
    if (i < 0 or j < 0 or i >= pond.size() or j >= pond[i].size() or pond[i][j] == '#') return;

    pond[i][j] = '#';
    DFS(pond, i - 1, j);
    DFS(pond, i + 1, j);
    DFS(pond, i, j - 1);
    DFS(pond, i, j + 1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long m, n, test_case = 1; 
    while (cin >> m >> n) {
        vector<vector<char>> pond(m, vector<char>(n));
        for (long i = 0; i < m; ++i) {
            for (long j = 0; j < n; ++j) cin >> pond[i][j];
        }

        long counter = 0;
        for (long i = 0; i < m; ++i) {
            for (long j = 0; j < n; ++j) {
                if (pond[i][j] == '-') {
                    DFS(pond, i, j);
                    counter++;
                }
            }
        }

        cout << "Case " << test_case << ": " << counter << "\n";
        test_case++;
    }

    return 0;
}
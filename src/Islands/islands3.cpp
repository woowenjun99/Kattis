#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Converts all clouds to land
 * 
 * @param grids 
 * @param i 
 * @param j 
 */
void DFS(vector<vector<char>> &grids, int i, int j) {
    if (i >= grids.size() || j >= grids[i].size() || i < 0 || j < 0 || grids[i][j] == 'W' || grids[i][j] == 'L') return;

    grids[i][j] = 'L';
    DFS(grids, i - 1, j);
    DFS(grids, i + 1, j);
    DFS(grids, i, j - 1);
    DFS(grids, i, j + 1);
}

void DFS_LAND(vector<vector<char>> &grids, int i, int j) {
    if (i >= grids.size() || j >= grids[i].size() || i < 0 || j < 0 || grids[i][j] == 'W') return;

    grids[i][j] = 'W';
    DFS_LAND(grids, i - 1, j);
    DFS_LAND(grids, i + 1, j);
    DFS_LAND(grids, i, j - 1);
    DFS_LAND(grids, i, j + 1);
}

int sum(vector<vector<char>> &grids) {
    int count = 0;
    for (int i = 0; i < grids.size(); ++i) {
        for (int j = 0; j < grids[i].size(); ++j) {
            if (grids[i][j] == 'L') {
                DFS(grids, i, j);
            }
        }
    }

    for (int i = 0; i < grids.size(); ++i) {
        for (int j = 0; j < grids[i].size(); ++j) {
            if (grids[i][j] == 'L') {
                DFS_LAND(grids, i, j);
                count++;
            }
        }
    }
    return count;
}

int main() {
    int a, b; cin >> a >> b;
    vector<vector<char>> grids(a);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            char x; cin >> x;
            grids[i].push_back(x);
        }
    }

    cout << sum(grids) << "\n";
}
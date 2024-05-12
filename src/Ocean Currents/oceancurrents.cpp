/**
 * @file main.cpp
 * @author Woo Wen Jun (woowenjun99@gmail.com)
 * @brief 0-1 BFS but this question cannot be solved in python because it will
 * TLE. Needs to solve in C++.
 * @version 0.1
 * @date 2024-05-12
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <queue>
#include <string>
#include <vector>

std::vector<std::vector<int>> currents;
std::vector<std::vector<bool>> visited;
std::vector<std::vector<int>> distances;
std::deque<std::pair<int, int>> dq;
int r, c, current_r, current_c;

void process(int row_to_process, int column_to_process, int current) {
    if (row_to_process < 0 or row_to_process >= r or column_to_process < 0 or column_to_process >= c) return;
    if (visited[row_to_process][column_to_process]) return;
    int w = currents[current_r][current_c] == current ? 0 : 1;
    if (distances[current_r][current_c] + w >= distances[row_to_process][column_to_process]) return;
    distances[row_to_process][column_to_process] = distances[current_r][current_c] + w;
    if (w == 0) dq.push_front({ row_to_process, column_to_process });
    else dq.push_back({ row_to_process, column_to_process });
}

void solve() {
    std::cin >> r >> c;
    currents.assign(r, std::vector<int>(c));
    for (int i = 0; i < r; i++) {
        std::string str;
        std::cin >> str;
        for (int j = 0; j < c; ++j) currents[i][j] = str[j] - '0';
    }
    int q;
    std::cin >> q;
    while (q--) {
        int rs, cs, rd, cd;
        std::cin >> rs >> cs >> rd >> cd;
        visited.assign(r, std::vector<bool>(c, false));
        distances.assign(r, std::vector<int>(c, 1e9));
        dq.push_back({ rs - 1, cs - 1});
        distances[rs - 1][cs - 1] = 0;
        visited[rs - 1][cs - 1] = 0;

        while (not dq.empty()) {
            current_r = dq.front().first;
            current_c = dq.front().second;
            dq.pop_front();

            visited[current_r][current_c] = true;
            process(current_r - 1, current_c - 1, 7);
            process(current_r - 1, current_c, 0);
            process(current_r - 1, current_c + 1, 1);
            process(current_r, current_c - 1, 6);
            process(current_r, current_c + 1, 2);
            process(current_r + 1, current_c - 1, 5);
            process(current_r + 1, current_c, 4);
            process(current_r + 1, current_c + 1, 3);
        }

        std::cout << distances[rd - 1][cd - 1] << "\n";
    }
}

int main(void) {
    freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0); 
	std::cin.tie(0); 
	std::cout.tie(0);
    solve();
    return 0;
}
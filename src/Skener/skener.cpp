#include <iostream>
#include <vector>

int main() {
    // freopen("in.txt", "r", stdin);
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int r, c, zr, zc;
    std::cin >> r >> c >> zr >> zc;
    std::vector<std::vector<char>> grid(r, std::vector<char>(c));
    for (long i = 0; i < r; ++i) {
        for (long j = 0; j < c; ++j) std::cin >> grid[i][j];
    }

    std::vector<std::vector<char>> new_grid(zr * r, std::vector<char>(zc * c));

    for (long i = 0; i < r; ++i) {
        for (long j = 0; j < c; ++j) {
            char c = grid[i][j];
            for (long a = i * zr; a < (i + 1) * zr;++a) {
                for (long b = j * zc; b < (j + 1) * zc; ++b) {
                    new_grid[a][b] = c;
                }
            }
        }
    }

    for (long i = 0; i < new_grid.size(); ++i) {
        for (long j = 0; j < new_grid[i].size(); ++j) std::cout << new_grid[i][j];
        std::cout << "\n";
    }

    return 0;
}
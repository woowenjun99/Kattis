#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n, n != -1) {
        int AM[25][25];
        
        // Populate the graph with either 0 or 1
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < n; ++col) {
                cin >> AM[row][col];
            }
        }
        
        // Determine if the i is weak
        for (int i = 0; i < n; ++i) {
            bool i_is_strong = 0;
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    if (AM[i][j] and AM[i][k] and AM[k][j]) {
                        i_is_strong = true;
                    }
                }
            }
            if (not i_is_strong) {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}
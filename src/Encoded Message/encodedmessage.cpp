#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int x; cin >> x;
    for (int i = 0; i < x; ++i) {
        string str; cin >> str;
        int size_of_string = str.size();
        int length_of_square = sqrt(size_of_string);
        int counter = 0;

        char square[length_of_square][length_of_square];

        for (int j = 0; j < length_of_square; ++j) {
            for (int k = 0; k < length_of_square; ++k) {
                square[j][k] = str[counter++];
            }
        }

        for (int j = length_of_square - 1; j >= 0; --j) {
            for (int k = 0; k < length_of_square; ++k) {
                cout << square[k][j];
            }
        }
        cout << endl;
    }

    return 0;
}
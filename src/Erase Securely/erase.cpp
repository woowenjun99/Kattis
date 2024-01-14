#include <iostream>
#include <string>
using namespace std;

class Solution {
    public:
        bool isSuccessfullyDeleted(int n, string original, string final) {
            if (n % 2 == 0) return original == final;

            for (int i = 0; i < original.size(); ++i) {
                if (original[i] == final[i]) return false;
            }
            return true;
        }
};

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    string original, final; cin >> original >> final;

    Solution s;
    if (s.isSuccessfullyDeleted(n, original, final)) {
        cout << "Deletion succeeded\n";
    } else {
        cout << "Deletion failed\n";
    }
    return 0;
}
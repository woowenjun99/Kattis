#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main(){
    long T; cin >> T;
    while (T--) {
        ull P, R, F; cin >> P >> R >> F;
        long year = 0;
        while (P <= F) {
            ++year;
            P *= R;
        }
        cout << year << "\n";
    }
    return 0;
}
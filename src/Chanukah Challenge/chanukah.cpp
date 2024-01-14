#include <iostream>
using namespace std;

int main() {
    int P;
    cin >> P;
    
    for (int i = 0; i < P; i ++) {
        int x, y;
        cin >> x >> y;
        int sum = 0;
        
        for (int j = 1; j < y + 1; j ++) {
            sum += j + 1;
        }
        
        
        cout << x << " " << sum << endl;
    }
}
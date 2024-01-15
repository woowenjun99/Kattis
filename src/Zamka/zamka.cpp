#include <iostream>
using namespace std;

int main() {
    long L, D, X;
    cin >> L >> D >> X;
    
    for (long i = L; i <= D; i++) {
        long sum = 0;
        long temp = i;

        while (temp > 0) {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == X) {
            cout << i << endl;
            break;
        }
    }
    
    for (long i = D; i >= L; i--) {
        long sum = 0;
        long temp = i;

        while (temp > 0) {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == X) {
            cout << i;
            break;
        }
    }
}

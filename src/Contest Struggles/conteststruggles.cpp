#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    unsigned long long totalAverage = a * c;
    unsigned long long solvedAverage = b * d;
    unsigned long long unsolvedAverage = (totalAverage - solvedAverage);
    
    if (unsolvedAverage / (1.0 * (a - b)) > 100) {
        cout << "impossible";
        return 0;
    }
    cout << fixed << setprecision(6) << unsolvedAverage / (1.0 * (a - b));
}
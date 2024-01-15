#include <iostream>
#include <limits>
using namespace std;

int main() {
    double C;
    long L;
    cin >> C >> L;
    double sum = 0.0;
    
    for (long i = 0; i < L; i ++) {
        double length, width;
        cin >> length >> width;
        sum += length * width ;
    }
    cout.precision(8);
    cout << sum * C;
}
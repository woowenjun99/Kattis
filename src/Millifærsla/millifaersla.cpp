#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int Monnei, Fjee, Dolladollabilljoll;
    cin >> Monnei >> Fjee >> Dolladollabilljoll;
    if (Monnei < Fjee and Monnei < Dolladollabilljoll) {
        cout << "Monnei" << endl;
    } else if (Fjee < Monnei and Fjee < Dolladollabilljoll) {
        cout << "Fjee" << endl;
    } else {
        cout << "Dolladollabilljoll" << endl;
    }

    return 0;
}
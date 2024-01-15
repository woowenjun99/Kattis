#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for (int i = 0; i < a; i ++) {
        int b;
        double c;
        cin >> b >> c;
        
        double diff = 60.0 / c;
        double bpm = (60.0 * b) / c;
        cout << bpm - diff << " " << bpm << " " << bpm + diff << endl;
    }
}
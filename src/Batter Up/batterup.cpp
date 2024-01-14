#include <iostream>
using namespace std;

int main() {
    double numerator = 0;
    double denominator = 0;
    int input;
    cin >> input;
    
    for (int i = 0; i < input; i ++) {
        int x;
        cin >> x;
        
        if (x == -1) {
            continue;
        }
        
        numerator += x;
        denominator += 1;
    }
    
    cout << double(numerator / denominator * 1.0);
}
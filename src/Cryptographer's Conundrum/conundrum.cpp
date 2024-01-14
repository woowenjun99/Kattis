#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    long intervals = str.size() / 3;
    long sum = 0;
    
    for (int i = 0; i < intervals; i ++) {
        if (str[(3 * i)] != 'P') {
            sum += 1;
        }
        
        if (str[(3 * i + 1)] != 'E') {
            sum += 1;
        }
        
        if (str[(3 * i + 2)] != 'R') {
            sum += 1;
        }
    }
    cout << sum;
}
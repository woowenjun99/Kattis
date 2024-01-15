#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    for (int i = 0; i < c; i ++) {
        int x = i + 1;
        if ((x % a == 0) && (x % b == 0)) {
            cout << "FizzBuzz" << endl;
        } else if ((x % a) == 0) {
            cout << "Fizz" << endl;
        } else if ((x % b) == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << x << endl;
        }
    }
}
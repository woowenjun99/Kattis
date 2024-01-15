#include <iostream>
using namespace std;

int main() {
    long a;
    cin >> a;
    
    for (long m = 0; m < a; m++) {
        string str;
        cin >> str;
        long sum = 0;
        long counter = 1;
    
        for (long i = str.size() - 1; i >= 0; i --) {
            // Convert the number to int
            long x = str[i] - '0';
            
            if (counter % 2 == 0) {
                x *= 2;
            
                if (x > 9) {
                    x = 1 + (x % 10);
                }
            }
            
            counter++;
            sum += x;
        }

        if (sum % 10 == 0) {
            cout << "PASS\n";
        } else {
            cout << "FAIL\n";
        }
    }
}
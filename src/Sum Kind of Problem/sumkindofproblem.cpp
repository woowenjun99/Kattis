#include <iostream>
using namespace std;

int main() {
    long n;
    cin >> n;
    
    for (long i = 0; i < n; i ++ ) {
        long b, c;
        cin >> b >> c;
        cout << i + 1 << " ";
        
        // FOR 1ST NUMBER
        long s1 = 0;
        for (int j = 1; j <= c; j ++) {
            s1 += j;
        }
        
        cout << s1 << " ";
        
        // FOR 2ND NUMBER
        int toAdd = 1;
        long s2 = 0;
        long j2 = 0;
        
        do {
            s2 += toAdd;
            toAdd += 2;
            j2 ++;
        } while (j2 != c);
        
        cout << s2 << " ";
        
        // FOR 3RD NUMBER
        toAdd = 2;
        long s3 = 0;
        long j3 = 0;
        
        do {
            s3 += toAdd;
            toAdd += 2;
            j3 ++;
        } while (j3 != c);
        
        cout << s3 << " ";
    }
}
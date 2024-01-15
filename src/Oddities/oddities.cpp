#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        string str;
        if (x % 2 == 0) {
            str = "even";
        } else {
            str = "odd";
        }
        
        cout << x << " is " << str << endl;
    }
}
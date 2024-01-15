#include <iostream>
using namespace std;

long square(long a) {
    return a * a;
}

int main() {
    string str;
    cin >> str;
    long letters[3] = {0};
    
    for (int i = 0; i < str.size(); i ++) {
        if (str[i] == 'T') {
            letters[0] += 1;
        } else if (str[i] == 'C') {
            letters[1] += 1;
        } else {
            letters[2] += 1;
        }
    }
    
    long sum = 0;

    sum += square(letters[0]) + square(letters[1]) + square(letters[2]);

    int min = letters[0];
    for (int i = 0; i < 3; i ++) {
        if (letters[i] < min) {
            min = letters[i];
        }
    }
    
    if (min) {
        sum += min * 7;
    }
    cout << sum;
}
#include <iostream>
#include <string>
using namespace std;

long remaining(string str, char B) {
    if (str[0] == 'J') {
        if (str[1] == B) {
            return 20;
        }
        return 2;
    }

    if (str[0] == '9' && str[1] == B) {
        return 14;
    }
    return 0;
}

int main() {
    int N;
    char B;
    cin >> N >> B;
    long sum = 0;
    
    for (int i = 0; i < 4 * N; i ++) {
        string str;
        cin >> str;

        switch (str[0]) {
        case 'A':
            sum += 11;
            break;
        case 'K':
            sum += 4;
            break;
        case 'Q':
            sum += 3;
            break;
        case 'T':
            sum += 10;
            break;
        default:
            sum += remaining(str, B);
            break;
        }
    }
    cout << sum;
}
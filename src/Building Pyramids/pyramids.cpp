#include <iostream>
using namespace std;

int main() {
    unsigned long long x;
    cin >> x;

    unsigned long long currentLevel = 1;
    unsigned long level = 0;

    while (true) {
        unsigned long long blocksRequired = currentLevel * currentLevel;
        if (x >= blocksRequired) {
            level += 1;
            x -= blocksRequired;
            currentLevel += 2;
            continue;
        }
        break;
    }

    cout << level;
}
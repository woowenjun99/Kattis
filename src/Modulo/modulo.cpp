#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(42);
    for (int i = 0; i < 42; i ++) {
        numbers[i] = 0;
    }
    
    for (int i = 0; i < 10; i ++) {
        int x;
        cin >> x;
        numbers[x % 42] += 1;
    }
    
    long count = 0;
    for (int i = 0; i < 42; i ++) {
        if (numbers[i]) {
            count ++;
        }
    }
    cout << count;
}
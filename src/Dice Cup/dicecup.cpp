#include <iostream>
#include <vector>
using namespace std;

int main() {
    long dice1, dice2;
    cin >> dice1 >> dice2;
    vector<long> sum(dice1 + dice2);
    
    for (long i = 1; i <= dice1; i ++) {
        for (long j = 1; j <= dice2; j ++) {
            sum[i + j - 1] += 1;
        }
    }
    
    int max = sum[0];
    for (int i = 0; i < sum.size(); i ++) {
        if (sum[i] > max) {
            max = sum[i];
        }
    }
    
    for (int i = 0; i < sum.size(); i ++) {
        if (sum[i] == max) {
            cout << i + 1 << endl;
        }
    }
}
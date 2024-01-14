#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int C;
    cin >> C;
    
    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        vector<long> numbers(N);
        double sum = 0.0;
        for (int j = 0; j < N; j ++) {
            int x;
            cin >> x;
            numbers[j] = x;
            sum += x;
        }
        
        double average = sum / N;
        long count = 0;
        for (int j = 0; j < N; j ++) {
            if (numbers[j] > average) {
                count ++;
            }
        }
        double percentage = count * 1.0 / N;
        cout << fixed << setprecision(3) << percentage * 100 << "%" << endl;
    }
}
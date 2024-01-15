#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    
    for (int i = 0; i < n; i ++) {
        cin >> num[i];
    }
    
    int maxElement = num[0];
    for (int i = 0; i < n; i ++) {
        if (maxElement < num[i]) {
            maxElement = num[i];
        }
    }
    
    vector<int> counter(maxElement);

    for (int i = 0; i < n; i ++) {
        counter[num[i] - 1] += 1;
    }
    
    bool goodJob = true;
    for (int i = 0; i < maxElement; i ++) {
        if (counter[i] == 0) {
            cout << i + 1 << endl;
            goodJob = false;
        }
    }

    if (goodJob) {
        cout << "good job";
    }
}
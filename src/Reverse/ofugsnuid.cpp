#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long x;
    cin >> x;
    
    vector<long long> nums(x);
    for (vector<long long>::iterator i = nums.begin(); i != nums.end(); ++i) {
        cin >> *i;
    }

    for (int i = nums.size() - 1; i >= 0; i --) {
        cout << nums[i] << endl;
    }
}
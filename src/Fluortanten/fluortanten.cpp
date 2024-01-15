#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    unsigned long long x;
    cin >> x;
    
    vector<long> nums(x);
    long positionOfB = 0;
    
    // Read in the value for the vectors and the position
    for (unsigned long long i = 0; i < x; i ++) {
        cin >> nums[i];
        if (nums[i] == 0) positionOfB = i;
    }
    
    // We shift the 0 to the front and make 0 index 0
    while (positionOfB > 0) nums[positionOfB--] = nums[positionOfB - 1];
    nums[0] = 0;
    
    // We calculate the sum (Time = n) for the 1st time
    long sum = 0;
    for (unsigned long long i = 0; i < nums.size(); i++) sum += ((i + 1) * nums[i]);
    long max = sum;

    for (unsigned long long i = 0; i < nums.size() - 1; i++) {
        // Before the swap, get the sum of index i and i + 1
        const long current = ((i + 1) * nums[i]) + ((i + 2) * nums[i + 1]);

        // Make the swap
        const long temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;

        // After the swap, get the sum of new index i and i + 1
        const long next = ((i + 1) * nums[i]) + ((i + 2) * nums[i + 1]);

        sum += (next - current);
        if (sum > max) max = sum;      
    }

    cout << max;
}
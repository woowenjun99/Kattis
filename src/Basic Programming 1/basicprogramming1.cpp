#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

void actionForSeven(vector<unsigned long long> &nums) {
    unsigned long long i = 0;
    unordered_set<unsigned long long> positions;
    positions.insert(0);
    
    do {
        i = nums[i];
        if (i >= nums.size()) {
            cout << "Out";
            break;
        }
        
        
        if (i == nums.size() - 1) {
            cout << "Done";
            break;
        }
        
        if (positions.find(i) != positions.end()) {
            cout << "Cyclic";
            break;
        }
        
        positions.insert(i);
    } while (true);
}

void actionForSix(vector<unsigned long long> &nums) {
    string str = "";
    for (unsigned long long x:nums) {
        x = x % 26;
        str.push_back('a' + x);
    }
    cout << str;
}

void actionForFive(vector<unsigned long long> &nums) {
    unsigned long long sum = 0;
    for (unsigned long long x:nums) {
        if (x % 2 == 0) {
            sum += x;
        }
    }
    cout << sum;
}

void actionForFour(vector<unsigned long long> &nums) {
    unsigned long long sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    cout << sum;
}

void actionForTwo(vector<unsigned long long> &nums) {
    if (nums[0] > nums[1]) {
        cout << "Bigger";
    } else if (nums[0] == nums[1]) {
        cout << "Equal";
    } else {
        cout << "Smaller";
    }
}

vector<unsigned long long> createVector(long n) {
    vector<unsigned long long> nums(n);
    for (long i = 0; i < n; i ++) {
        cin >> nums[i];
    }
    return nums;
}

void actionForThree(vector<unsigned long long> &nums) {
    sort(nums.begin(), nums.begin() + 3);
    cout << nums[1];
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<unsigned long long> nums = createVector(n);

    switch(t) {
        case 1:
            cout << 7;
            break;
        case 2:
            actionForTwo(nums);
            break;
        case 3:
            // CHANGE THE SORTING ALGO
            actionForThree(nums);
            break;
        case 4:
            actionForFour(nums);
            break;
        case 5:
            actionForFive(nums);
            break;
        case 6: 
            actionForSix(nums);
            break;
        default:
            actionForSeven(nums);
    }
}
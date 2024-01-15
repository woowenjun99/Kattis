#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

long total = 0;
vector<string> pairsOnly;

void removeSpacing(string str) {
    istringstream ss(str);
    while (getline(ss, str, ';')) {
        size_t positionOfDash = str.find("-");
        if (positionOfDash == str.npos) {
            total ++;
            continue;
        }
        pairsOnly.push_back(str);
    }
}

void removeDash() {
    vector<int> nums;
    for (string str: pairsOnly) {
        istringstream ss(str);
        
        while (getline(ss, str, '-')) {
            nums.push_back(stoi(str));
        }
    }

    for (long i = 0; i < nums.size(); i += 2) {
        total += (nums[i + 1] - nums[i] + 1);
    }
    
}

int main() {
    string input;
    getline(cin, input);
    removeSpacing(input);
    removeDash();
    cout << total;
}
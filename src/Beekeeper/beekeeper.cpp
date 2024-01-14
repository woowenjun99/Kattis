#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    while (x != 0) {
        vector<long> nums(x);
        vector<string> words(x);

        for (int i = 0; i < x; i ++) {
            string str;
            cin >> str;
            words[i] = str;
            long pairOfVowels = 0;
            // USED TO CHECK PAIRS OF VOWELS
            for (int j = 0; j < str.size(); j ++) {
                bool pairA = str[j] == 'a' && str[j + 1] == 'a';
                bool pairE = str[j] == 'e' && str[j + 1] == 'e';
                bool pairI = str[j] == 'i' && str[j + 1] == 'i';
                bool pairO = str[j] == 'o' && str[j + 1] == 'o';
                bool pairU = str[j] == 'u' && str[j + 1] == 'u';
                bool pairY = str[j] == 'y' && str[j + 1] == 'y';
    
                if (pairA || pairE || pairI || pairO || pairU || pairY) {
                    pairOfVowels ++;
                }
            }
            
            nums[i] = pairOfVowels;
        }
        
        int max = nums[0];
        int position = 0;
        for (int i = 0; i < x; i ++) {
            if (nums[i] > max) {
                max = nums[i];
                position = i;
            }
        }
        cout << words[position] << endl;
        // RE-READ THE NEW TEST CASES.
        cin >> x;
    }
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long n; cin >> n;
    string str1, str2; cin >> str1 >> str2;
    long similarity = 0;
    vector<long> alphabets(26, 0);
    for (long i = 0; i < str1.size(); ++i) {
        if (str1[i] == str2[i]) similarity++; 
        else alphabets[str1[i] - 'A'] += 1;
    }
    cout << similarity << " ";

    long s = 0;
    for (long i = 0; i < str2.size(); ++i) {
        if (alphabets[str2[i] - 'A'] == 0) continue;
        else if (alphabets[str2[i] - 'A'] > 0 and str2[i] != str1[i]) {
            s++;
            alphabets[str2[i] - 'A']--;
        }
    }
    cout << s;
    return 0;
}
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool containsDuplicate(string &str) {
    vector<bool> hasDuplicate(26, false);
    for (int i = 0; i < str.size(); ++i) {
        if (hasDuplicate[str[i] - 'a']) {
            return true;
        }
        hasDuplicate[str[i] - 'a'] = true;
    }
    return false;
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<string> v;
    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        if (str.size() < 5 or containsDuplicate(str)) continue;
        v.push_back(str);
    }

    if (not v.size()) cout << "Neibb\n";
    else {
        // Find the length of the shortest word.
        int shortest_so_far = v[0].size();
        for (auto str: v) {
            if (str.size() < shortest_so_far) shortest_so_far = str.size();
        }

        // Get the words with the shortest length
        vector<string> corresponding_words;
        for (auto str: v) {
            if (str.size() == shortest_so_far) corresponding_words.push_back(str); 
        }
        sort(corresponding_words.begin(), corresponding_words.end());
        reverse(corresponding_words.begin(), corresponding_words.end());
        cout << corresponding_words[0] << "\n";
    }

    return 0;
}
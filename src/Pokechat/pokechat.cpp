#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string word; 
    getline(cin, word);
    char a, b, c;
    while (cin >> a >> b >> c) {
        string new_word;
        new_word.push_back(a);
        new_word.push_back(b);
        new_word.push_back(c);
        int index = stoi(new_word);
        cout << word[index - 1];
    }
    return 0;
}
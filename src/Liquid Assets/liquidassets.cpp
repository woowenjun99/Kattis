#include <iostream>
#include <string>
#include <vector>
using namespace std;

string firstCheck(string str) {
    string newStr = "";
    for (int i = 0; i < str.size(); i ++) {
        bool isSameAsNext = str[i] == str[i + 1];
        char currentLetter = str[i];
        if (!isSameAsNext) {
            newStr.push_back(currentLetter);
        }
    }
    return newStr;
}

string secondCheck(string str) {
    string newStr = "";
    for (int i = 0; i < str.size(); i ++) {
        char letter = str[i];
        bool isVowel = letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';
        if ((i == 0 || i == str.size() - 1) && isVowel) {
            newStr.push_back(letter);
        }

        if (!isVowel) {
            newStr.push_back(letter);
        }
    }
    return newStr;
}

int main()  {
    int n;
    cin >> n;
    vector<string> wordsToPrint(n);
    for (int i = 0; i < n; i++) {
        cin >> wordsToPrint[i];
    }
    for (int i = 0; i < n; i++) {
        string newStr = secondCheck(firstCheck(wordsToPrint[i]));
        cout << newStr << " ";        
    }
}
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

unordered_set<string> bank;

int main() {
    // READING IN THE WORDS
    string word;
    getline(cin, word);
    
    istringstream ss(word);
    while (ss >> word) {
        if (bank.find(word) != bank.end()) {
            cout << "no" << endl;
            return 0;
        }
        bank.insert(word);
    }
    cout << "yes" << endl;
}
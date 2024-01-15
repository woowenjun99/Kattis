#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);

    for (vector<string>::iterator i = words.begin(); i != words.end(); ++i) {
        cin >> *i;
    }

    for (int i = 0; i < words.size(); i += 2) {
        cout << words[i] << endl;
    }
}
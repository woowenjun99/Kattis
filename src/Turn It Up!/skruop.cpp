#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 7;
    string x;
    getline(cin, x);
    int y = stoi(x);
    
    for (int i = 0; i < y; i ++) {
        string str;
        getline(cin, str);
        
        if (str == "Skru op!" && score < 10) {
            score ++;
            continue;
        } else if (str == "Skru ned!" && score > 0) {
            score --;
        }
    }
    cout << score;
}
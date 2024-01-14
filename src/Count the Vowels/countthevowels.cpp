#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int score = 0;
    
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            score += 1;
        }
        
                if (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
            score += 1;
        }
    }
    cout << score;
}
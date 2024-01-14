#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    long whitespace = 0;
    long lowercase = 0;
    long uppercase = 0;
    long symbols = 0;
    long total = str.size();
    
    for (long i = 0; i < total; i ++) {
        if (str[i] == '_') {
            whitespace++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        } else {
            symbols++;
        }
    }
    
    cout << double(whitespace / (total * 1.0)) << endl;
    cout << double(lowercase / (total * 1.0)) << endl;
    cout << double(uppercase / (total * 1.0)) << endl;
    cout << double(symbols / (total * 1.0)) << endl;
}
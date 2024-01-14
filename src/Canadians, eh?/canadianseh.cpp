#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    if (str.size() >= 3 and str[str.size() - 1] == '?' and str[str.size() - 2] == 'h' and str[str.size() - 3] == 'e') {
        cout << "Canadian!";
        return 0;
    }
    cout << "Imposter!";
    return 0;
}
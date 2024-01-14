#include <iostream>
#include <string>
using namespace std;

int main(void) {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // Step 1: Read in the input.
    string str; 
    getline(cin, str);
    string toPrint[26] = {
        "@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", 
        "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};

    // Step 2: Convert into lower case
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 'A' and str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }

        if (str[i] >= 'a' and str[i] <= 'z') {
            cout << toPrint[str[i] - 'a'];
        } else {
            cout << str[i];
        }
    }

    return 0;
}
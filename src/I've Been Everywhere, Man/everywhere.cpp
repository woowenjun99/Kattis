#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    for (int i = 0; i < x; i ++) {
        unordered_map<string, int> countries;
        long counter = 0;
        int y;
        cin >> y;
        
        for (int j = 0; j < y; j ++) {
            string str;
            cin >> str;
            if (countries.find(str) == countries.end()) {
                countries.insert(pair<string, int>(str, 1));
                counter++;
                continue;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
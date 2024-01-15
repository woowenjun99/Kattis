#include <iostream>
#include <sstream>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int T; cin >> T; 
    cin.ignore();
    for (int i = 0; i < T; ++i) {
        string str, token; 
        unordered_set<string> sounds;
        vector<string> v;

        // Reading all the sounds into the set
        getline(cin, str);
        istringstream ss(str);
        while (getline(ss, token, ' ')) {
            sounds.insert(token);
            v.push_back(token);
        }

        // Reading in the sound made by the animals
        while (getline(cin, str), str != "what does the fox say?") {
            size_t pos = str.find("goes ");
            string str2 = str.substr(pos + 5);
            if (sounds.find(str2) != sounds.end()) sounds.erase(str2);
        }

        // Iterate through the array and check whether the sound was removed
        for (string sound: v) {
            if (sounds.find(sound) != sounds.end()) cout << sound << " ";
        }
    }
}
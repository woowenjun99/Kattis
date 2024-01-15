#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int x = stoi(str);
    
    for (int i = 0; i < x; i++) {
        string str2;
        getline(cin, str2);
        string mockString = "Simon says ";
        
        // [mockString2] is a string that we used to append for comparison 
        string mockString2 = "";
        
        // If the size of the string is just 11, there will be nothing to print
        // even if it is simply Simon says.
        if (str2.size() > 11) {
            
            // Filling up mockString 2
            for (int j = 0; j < 11; j ++)  {
                mockString2.push_back(str2[j]);
            }
            
            // cout << mockString2 << endl;
            
            if (mockString2 == mockString) {
                for (int j = 11; j < str2.size(); j ++) {
                    cout << str2[j];
                }
                cout << "\n";
            }
        }
    }
}
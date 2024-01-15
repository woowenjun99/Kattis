#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<bool> cups = {true, false, false};

void swap(int a, int b) {
    bool temp = cups[a];
    cups[a] = cups[b];
    cups[b] = temp;
}

int main() {
    string str;
    cin >> str;
    
    
    for (int i = 0; i < str.size(); i ++) {
        if (str[i] == 'A') {
            swap(0, 1);
        } else if (str[i] == 'B') {
            swap(1, 2);
        } else {
            swap(0, 2);
        }
    }
    
    for (int i = 0; i < 3;i ++) {
        if (cups[i] == true) {
            cout << i + 1 << endl;
        }
    }
}
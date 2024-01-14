#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    
    long left = 0;
    while (str1[left] != '(') {
        left ++;
    }
    
    long counter = 0;
    long right = str1.size() - 1;
    while (str1[right] != ')') {
        counter ++;
        right --;
    }
    
    if (left == counter) {
        cout << "correct";
    } else {
        cout << "fix";
    }
}
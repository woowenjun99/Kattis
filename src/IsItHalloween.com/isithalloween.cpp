#include <iostream>
#include <string>
using namespace std;

int main() {
    string month, date;
    cin >> month >> date;
    bool halloween = month == "OCT" && date == "31";
    bool christmas = month == "DEC" && date == "25";
    
    if (halloween || christmas) {
        cout << "yup";
    } else {
        cout << "nope";
    }
}
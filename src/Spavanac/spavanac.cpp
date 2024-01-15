#include <iostream>
using namespace std;

int main() {
    int hours, min;
    cin >> hours >> min;
    if (min < 45) {
        min += 15;
        if (hours == 0) {
            hours = 23;
        } else {
            hours -= 1;
        }
    } else {
        min -= 45;
    }
    cout << hours << " " << min;
}
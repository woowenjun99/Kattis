#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long calculateSteps(vector<long> &people) {
    long counter = 0;
    for (long i = 1; i < people.size(); ++i) {
        long temp = people[i];
        long j = i - 1;
        while (j >= 0 && people[j] > temp) {
            swap(people[j], people[j + 1]);
            counter++;
            j--;
        }
    }
    return counter;
}

int main() {
    long x; cin >> x;
    for (long i = 0; i < x; ++i) {
        long a; cin >> a;
        vector<long> people(20);
        for (long j = 0; j < 20; ++j) cin >> people[j];
        cout << a << " " << calculateSteps(people) << "\n";
    }
}
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    unsigned long long N, M;
    cin >> N >> M;
    
    do {
        unordered_set<unsigned long long> cds;
        unsigned long long counter = 0;
    
        for (unsigned long long i = 0; i < N; i++) {
            unsigned long long x;
            cin >> x;
            cds.insert(x);
        }
    
        for (unsigned long long j = 0; j < M; j++) {
            unsigned long long x;
            cin >> x;
            if (cds.find(x) != cds.end()) {
                counter++;
            }
        }
        cds.clear();
        cout << counter << endl;
        cin >> N >> M;
    } while (!(M == 0 && N == 0));
}
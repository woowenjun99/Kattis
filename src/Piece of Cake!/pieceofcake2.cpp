#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, h, v;
    cin >> n >> h >> v;
    
    vector<int> area(4);
    area[0] = v * h;
    area[1] = (n - v) * h;
    area[2] = (n - v) * (n - h);
    area[3] = v * (n - h);
    int max = area[0];
    for (vector<int>::iterator i = area.begin(); i != area.end(); ++i) {
        if (*i > max) {
            max = *i;
        }
    }
    cout << max * 4;
}
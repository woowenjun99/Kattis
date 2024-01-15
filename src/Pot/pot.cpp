#include <iostream>
using namespace std;

int main()  {
    int num, sum;
    sum = 0;
    cin >> num;
    
    for (int i = 0; i < num; i ++)  {
        int newp, p, power;
        newp = 1;
        cin >> p;
        power = p % 10;
        p /= 10;
        for (int j = 0; j < power; j ++)    {
            newp *= p;
        }
        sum += newp;
    }
    cout << sum;
    return 0;
}
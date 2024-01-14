#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b, h;
    cin >> a >> b >> h;
    int times = 0;
    int current = 0;
    while (current < h)
    {
        times += 1;
        current += a;
        if (current >= h)
        {
            break;
        }
        current -= b;
    }
    cout << times;
}
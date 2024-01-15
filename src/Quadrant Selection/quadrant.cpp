#include <iostream>
using namespace std;

class SolveQuadrant   {
    public:
    int x;
    int y;

    void chooseQuadrant(int x, int y)   {
        if (x > 0 && y > 0)  {
            cout << "1" << endl;
        }   else if (x > 0 && y < 0)  {
            cout << "4" << endl;
        }   else if (x < 0 && y > 0)    {
            cout << "2" << endl;
        }   else    {
            cout  << "3" << endl;
        }
    }
};

int main()  {
    SolveQuadrant obj1;
    cin >> obj1.x >> obj1.y;
    obj1.chooseQuadrant(obj1.x, obj1.y);
    return 0;
}
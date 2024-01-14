#include <iostream>
using namespace std;

int main()
{
    int correctNumber[6] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
    {
        int piece;
        cin >> piece;

        cout << correctNumber[i] - piece << " ";
    }
}
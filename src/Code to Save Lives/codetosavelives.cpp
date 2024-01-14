#include <iostream>
#include <string>
#include <vector>
using namespace std;

int conversion(string str)
{
    int x = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            x = x * 10 + int(str[i]) - '0';
        }
    }
    return x;
}

void printNumber(int x) {
    vector<int> num(10);
    int counter = 0;

    while (x > 0) {
        num[counter] = x % 10;
        x /= 10;
        counter += 1;
    }
    
    for (int i = counter - 1; i >= 0; i--) {
        cout << num[i] << " ";
    }
}

int main()
{
    string x;
    getline(cin, x);
    int n;
    if (x == "10")
    {
        n = 10;
    }
    else
    {
        n = int(x[0]) - '0';
    }

    for (int i = 0; i < n; i++)
    {
        string str1;
        string str2;
        getline(cin, str1);
        getline(cin, str2);

        int num1 = conversion(str1);
        int num2 = conversion(str2);
        int total = num1 + num2;
        printNumber(total);
    }

    return 0;
}
using namespace std;
#include <string> // getline, string
#include <iostream> // cin, cout
#include <cmath> // round()

int sumASCII(string letter)
{
    int sum = 0;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        sum += int(x);
    }
    return sum;
}

int main(){
    string a;
    getline(cin, a);
    int total;
    total = sumASCII(a);
    int len;
    len = a.length();
    double avg = total / len;
    avg = floor(avg);
    cout << char(avg);
}
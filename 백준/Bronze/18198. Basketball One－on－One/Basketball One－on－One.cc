#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < str.size(); i += 2)
    {
        if (str[i] == 'A')
            sum1 += str[i + 1] - '0';
        else
            sum2 += str[i + 1] - '0';
    }

    cout << (sum1 > sum2 ? 'A' : 'B');
}
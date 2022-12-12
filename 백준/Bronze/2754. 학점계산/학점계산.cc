#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    double sum = 0;
    if (str.size() < 2)
    {
        cout << fixed;
        cout.precision(1);
    }
    else
    {
        sum += (double)(4 - (str[0] - 'A'));
        if (str[1] == '+')
            sum += 0.3;
        else if (str[1] == '-')
            sum -= 0.3;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum;
}
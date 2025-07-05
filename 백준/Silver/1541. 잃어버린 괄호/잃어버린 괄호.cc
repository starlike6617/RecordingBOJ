#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;
    bool isMinus = false;
    string temp = "";

    for (char c : s)
    {
        if ('0' <= c && c <= '9')
        {
            temp += c;
        }
        else
        {
            if (isMinus)
            {
                sum -= stoi(temp);
            }
            else
            {
                sum += stoi(temp);
            }

            if (c == '-')
            {
                isMinus = true;
            }

            temp = "";
        }
    }

    if (isMinus)
    {
        sum -= stoi(temp);
    }
    else
    {
        sum += stoi(temp);
    }

    cout << sum;
}
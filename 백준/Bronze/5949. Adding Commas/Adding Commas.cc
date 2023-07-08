#include <iostream>
using namespace std;

int main()
{
    string N;
    cin >> N;

    string rev = "";
    for (int i = N.size() - 1; i >= 0; i--)
    {
        rev += N[i];
    }

    string res = "";
    for (int i = 0; i < rev.size(); i++)
    {
        res += rev[i];
        if (i % 3 == 2 && i != rev.size() - 1)
        {
            res += ",";
        }
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
}
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;

    int alp[26] = {};
    while (n--)
    {
        string str;
        cin >> str;

        int multi = 1;
        for (int j = str.size() - 1; j >= 0; j--)
        {
            alp[str[j] - 'A'] += multi;
            multi *= 10;
        }
    }

    sort(alp, alp + 26, comp);

    int res = 0, num = 9;
    for (int i = 0; i < 26; i++)
    {
        if (alp[i])
        {
            res += alp[i] * num;
            num--;
        }
        else
            break;
    }
    cout << res;
}
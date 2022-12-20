#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int x, int y)
{
    return x > y;
}

bool isThere_0(string num)
{
    if (num.find("0") != string::npos)
        return true;
    return false;
}

bool isMulti_3(string num)
{
    int sum = 0;
    while (num.size())
    {
        sum += (int)num[num.size() - 1] - '0';
        num.pop_back();
    }

    if (sum % 3 == 0)
        return true;
    return false;
}

int main()
{
    string n;
    cin >> n;

    if (isThere_0(n) && isMulti_3(n))
    {
        vector<int> v;
        while (n.size())
        {
            v.push_back((int)n[n.size() - 1] - '0');
            n.pop_back();
        }

        sort(v.begin(), v.end(), desc);
        for (int i : v)
            cout << i;
    }
    else
        cout << -1;
}
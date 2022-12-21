#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isUnique(vector<string> vec)
{
    for (string s : vec)
    {
        int cnt = count(vec.begin(), vec.end(), s);
        if (cnt > 1)
            return false;
    }
    return true;
}

int main()
{
    while (1)
    {
        string str;
        cin >> str;

        if (str == "*")
            break;

        bool res = true;
        vector<string> v;
        for (int i = 1; i < str.size(); i++)
        {
            for (int j = 0; j <= str.size() - 1 - i; j++)
            {
                string sub;
                sub.append(1, str[j]);
                sub.append(1, str[j + i]);
                v.push_back(sub);
            }

            if (!isUnique(v))
            {
                res = false;
                v.clear();
                break;
            }

            v.clear();
        }

        cout << str << ' ';
        if (res)
            cout << "is surprising." << '\n';
        else
            cout << "is NOT surprising." << '\n';
    }
}
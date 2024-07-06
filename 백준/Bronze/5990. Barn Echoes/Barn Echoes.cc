#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    if (a.size() > b.size())
        swap(a, b);

    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 1; j <= a.size() - i; j++)
        {
            string s = a.substr(i, j);
            if (b.find(s) != string::npos)
                res = max(res, (int)s.size());
        }
    }

    cout << res;
}
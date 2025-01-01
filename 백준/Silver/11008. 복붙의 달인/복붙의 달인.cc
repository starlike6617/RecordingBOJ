#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s, p;
        cin >> s >> p;

        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i + p.size() - 1 < s.size() && s.substr(i, p.size()) == p)
            {
                cnt++;
                i += p.size() - 1;
            }
            else
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}
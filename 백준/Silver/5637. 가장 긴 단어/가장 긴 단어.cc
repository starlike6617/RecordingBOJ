#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string res = "";
    int cnt = 0;

    while (true)
    {
        string s;
        cin >> s;

        if (s == "E-N-D")
        {
            break;
        }

        int tmpCnt = 0;
        string tmp = "";

        for (char c : s)
        {
            if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || c == '-')
            {
                tmpCnt++;
                tmp += c;
            }
        }

        if (tmpCnt > cnt)
        {
            res = tmp;
            cnt = tmpCnt;
        }
    }

    for (char c : res)
    {
        if ('A' <= c && c <= 'Z')
        {
            cout << (char)(c - 'A' + 'a');
        }
        else
        {
            cout << c;
        }
    }
}
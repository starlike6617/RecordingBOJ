#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    if (N <= 25)
    {
        cout << S;
    }
    else
    {
        string tmp = S.substr(11, N - 22);
        bool isDot = false;
        for (int i = 0; i < tmp.size() - 1; i++)
        {
            if (tmp[i] == '.')
            {
                cout << S.substr(0, 9) << "......" << S.substr(N - 10, 10);
                isDot = true;
                break;
            }
        }

        if (!isDot)
        {
            cout << S.substr(0, 11) << "..." << S.substr(N - 11, 11);
        }
    }
}
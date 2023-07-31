#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string N;
        cin >> N;

        string revN = "";
        for (int i = N.size() - 1; i >= 0; i--)
        {
            revN += N[i];
        }

        int res = stoi(N) + stoi(revN);
        string resN = to_string(res);

        bool isPal = true;
        for (int i = 0; i < resN.size() / 2; i++)
        {
            if (resN[i] != resN[resN.size() - i - 1])
            {
                isPal = false;
                break;
            }
        }

        if (isPal)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < (n + 1) / 2; j++)
            {
                if (j == (n + 1) / 2 - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "* ";
                }
            }
        }
        else
        {
            for (int j = 0; j < n / 2; j++)
            {
                cout << " *";
            }
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string str;
        int i, j;
        cin >> str >> i >> j;

        for (int idx = 0; idx < str.size(); idx++)
        {
            if (i <= idx && idx < j)
                continue;
            cout << str[idx];
        }
        cout << endl;
    }
}
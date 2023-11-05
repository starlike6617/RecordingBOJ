#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);

        int arr[26] = {};
        for (char c : s)
        {
            if (isalpha(c))
            {
                arr[tolower(c) - 'a']++;
            }
        }

        int cnt = 1000000000;
        for (int j : arr)
        {
            cnt = min(cnt, j);
        }

        cout << "Case " << i << ": ";
        if (cnt == 0)
        {
            cout << "Not a pangram" << endl;
        }
        else if (cnt == 1)
        {
            cout << "Pangram!" << endl;
        }
        else if (cnt == 2)
        {
            cout << "Double pangram!!" << endl;
        }
        else if (cnt == 3)
        {
            cout << "Triple pangram!!!" << endl;
        }
    }
}
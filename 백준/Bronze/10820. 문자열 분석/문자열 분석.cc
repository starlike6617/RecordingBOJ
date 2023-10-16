#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int arr[4] = {};
        for (char c : s)
        {
            if ('a' <= c && c <= 'z')
            {
                arr[0]++;
            }
            else if ('A' <= c && c <= 'Z')
            {
                arr[1]++;
            }
            else if ('0' <= c && c <= '9')
            {
                arr[2]++;
            }
            else if (c == ' ')
            {
                arr[3]++;
            }
        }

        for (int i : arr)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}
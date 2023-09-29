#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        arr[i] = stoll(s);
    }

    sort(arr, arr + n);

    for (long long i : arr)
        cout << i << endl;
}
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    return a + b > b + a;
}

int main()
{
    int N;
    cin >> N;

    string arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N, cmp);

    if (arr[0] == "0")
        cout << 0;
    else
        for (string s : arr)
            cout << s;
}
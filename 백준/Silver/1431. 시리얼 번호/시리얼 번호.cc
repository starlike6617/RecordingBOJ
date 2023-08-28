#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else
    {
        int sumA = 0, sumB = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if ('0' <= a[i] && a[i] <= '9')
            {
                sumA += a[i] - '0';
            }
        }
        for (int i = 0; i < b.size(); i++)
        {
            if ('0' <= b[i] && b[i] <= '9')
            {
                sumB += b[i] - '0';
            }
        }

        if (sumA != sumB)
        {
            return sumA < sumB;
        }
        else
        {
            return a < b;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    string arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N, cmp);

    for (string s : arr)
    {
        cout << s << endl;
    }
}
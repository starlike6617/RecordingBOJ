#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int arr[1000];
map<int, int> m;
map<int, int> idx;

bool cmp(int a, int b)
{
    if (m[a] == m[b])
    {
        return idx[a] < idx[b];
    }
    return m[a] > m[b];
}

int main()
{
    int N, C;
    cin >> N >> C;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
        if (idx[arr[i]] == 0)
        {
            idx[arr[i]] = i + 1;
        }
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << ' ';
    }
}
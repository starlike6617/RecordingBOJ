#include <iostream>
#include <algorithm>
using namespace std;

class Array
{
public:
    int A;
    int B;
    int idx;
};

bool cmp1(Array a, Array b)
{
    if (a.A == b.A)
    {
        return a.idx < b.idx;
    }
    return a.A < b.A;
}

bool cmp2(Array a, Array b)
{
    return a.idx < b.idx;
}

int main()
{
    int N;
    cin >> N;

    Array arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].A;
        arr[i].B = 0;
        arr[i].idx = i;
    }

    sort(arr, arr + N, cmp1);

    for (int i = 0; i < N; i++)
    {
        arr[i].B = i;
    }

    sort(arr, arr + N, cmp2);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].B << ' ';
    }
}
#include <bits/stdc++.h>
using namespace std;

int cnt;
int a[8];
int arr[8];
bool visited[8];

bool isConvex(int a1, int a2, int a3)
{
    return sqrt(2) * a1 * a3 <= a2 * (a1 + a3);
}

void dfs(int n)
{
    if (n == 8)
    {
        bool convexRes = true;
        for (int i = 0; i < 8; i++)
        {
            convexRes &= isConvex(arr[i], arr[(i + 1) % 8], arr[(i + 2) % 8]);
        }

        if (convexRes)
        {
            cnt++;
        }

        return;
    }

    for (int i = 0; i < 8; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            arr[n] = a[i];
            dfs(n + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    dfs(0);

    cout << cnt;
}
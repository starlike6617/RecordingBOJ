#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N, M;
int arr[9];
bool visited[9];

void dfs(int num, int cnt)
{
    if (cnt == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }

    for (int i = num; i <= N; i++)
    {
        if (!visited[i])
        {
            // visited[i] = true;
            arr[cnt] = i;
            dfs(i, cnt + 1);
            // visited[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    dfs(1, 0);
}
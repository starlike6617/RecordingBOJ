#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N, M;
int input[9];
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
            arr[cnt] = input[i - 1];
            dfs(i, cnt + 1);
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }
    sort(input, input + N);

    dfs(1, 0);
}
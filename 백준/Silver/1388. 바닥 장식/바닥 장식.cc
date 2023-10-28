#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    char arr[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    bool visited[N][M] = {};
    int cnt = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (!visited[i][j])
            {
                cnt++;
                if (arr[i][j] == '-')
                {
                    for (int a = j - 1; a >= 0; a--)
                    {
                        if (arr[i][a] == '-')
                            visited[i][a] = true;
                        else
                            break;
                    }
                    for (int a = j + 1; a < M; a++)
                    {
                        if (arr[i][a] == '-')
                            visited[i][a] = true;
                        else
                            break;
                    }
                }
                else
                {
                    for (int a = i - 1; a >= 0; a--)
                    {
                        if (arr[a][j] == '|')
                            visited[a][j] = true;
                        else
                            break;
                    }
                    for (int a = i + 1; a < N; a++)
                    {
                        if (arr[a][j] == '|')
                            visited[a][j] = true;
                        else
                            break;
                    }
                }
            }

    cout << cnt;
}
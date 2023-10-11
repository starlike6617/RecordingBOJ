#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N, M;
int input[9];
int arr[9];
bool visited[9];
set<vector<int>> s;

void dfs(int num, int cnt)
{
    if (cnt == M)
    {
        vector<int> v;
        for (int i = 0; i < M; i++)
        {
            v.push_back(arr[i]);
        }
        s.insert(v);
        v.clear();
        return;
    }

    for (int i = num; i < N; i++)
    {
        arr[cnt] = input[i];
        dfs(i, cnt + 1);
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
    dfs(0, 0);

    for (auto i : s)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}
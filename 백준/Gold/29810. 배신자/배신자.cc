#include <bits/stdc++.h>
using namespace std;

const int S = 200005;

int T, sz[S], chk[S], id;
vector<int> gh[S];

void dfs(int v)
{
    chk[v] = id;
    sz[id]++;
    for (int i : gh[v])
    {
        if (!chk[i] and i != T)
        {
            dfs(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    for (int i = 0, u, v; i < M; i++)
    {
        cin >> u >> v;
        gh[u].push_back(v);
        gh[v].push_back(u);
    }
    
    cin >> T;
    
    for (int i = 1; i <= N; i++)
    {
        if (!chk[i] and i != T)
        {
            id++;
            dfs(i);
        }
    }
    
    map<int,int> cnt;
    for (int i : gh[T])
    {
        if (cnt.find(chk[i]) == cnt.end())
        {
            sz[chk[i]]++;
            cnt[chk[i]] = 1;
        }
        else if (cnt[chk[i]] == 1)
        {
            sz[chk[i]]--;
            cnt[chk[i]] = 2;
        }
    }
    
    int ans = 1;
    for (int i = 1; i <= id; i++)
        ans = max(ans, sz[i]);
    cout << ans;
}

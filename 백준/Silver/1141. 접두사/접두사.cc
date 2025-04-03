#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    return a.size() < b.size();
}

int main()
{
    int N;
    cin >> N;

    vector<string> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (v[j].substr(0, v[i].size()) == v[i])
            {
                cnt++;
                break;
            }
        }
    }

    cout << N - cnt;
}
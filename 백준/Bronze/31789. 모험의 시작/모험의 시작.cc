#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, X, S;
    cin >> N >> X >> S;

    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    bool isMoheom = false;
    for (auto it : v)
    {
        if (it.first <= X && it.second > S)
        {
            isMoheom = true;
        }
    }

    cout << (isMoheom ? "YES" : "NO");
}
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> v(M);
    for (int i = 0; i < M; i++)
        cin >> v[i];

    while (Q--)
    {
        string s;
        cin >> s;

        if (s == "assign")
        {
            int a, b;
            cin >> a >> b;
            v[a - 1] = v[b - 1];
        }
        else if (s == "swap")
        {
            int a, b;
            cin >> a >> b;
            swap(v[a - 1], v[b - 1]);
        }
        else
        {
            int a;
            cin >> a;
            v[a - 1] = 0;
        }
    }

    sort(v.begin(), v.end());

    v.erase(remove(v.begin(), v.end(), 0), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << endl;
    for (int i : v)
        cout << i << endl;
}
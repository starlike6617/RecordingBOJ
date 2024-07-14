#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> d(N);
    for (int i = 0; i < N; i++)
        cin >> d[i];
    sort(d.begin(), d.end());

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        int s = lower_bound(d.begin(), d.end(), a) - d.begin();
        int e = upper_bound(d.begin(), d.end(), b) - d.begin();

        cout << e - s << endl;
    }
}
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> v(N + 1);
    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        int num;
        cin >> num;

        sum += num;
        v[i] = sum;
    }

    while (M--)
    {
        int i, j;
        cin >> i >> j;
        cout << v[j] - v[i - 1] << endl;
    }
}
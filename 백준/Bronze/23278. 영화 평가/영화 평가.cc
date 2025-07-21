#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N, L, H;
    cin >> N >> L >> H;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = L; i < N - H; i++)
    {
        sum += v[i];
    }

    cout << fixed;
    cout.precision(9);

    cout << (double)sum / (N - L - H);
}
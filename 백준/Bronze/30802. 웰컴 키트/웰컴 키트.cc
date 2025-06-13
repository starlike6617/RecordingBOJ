#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }

    int T, P;
    cin >> T >> P;

    int sum = 0;
    for (int i : v)
    {
        sum += (i + T - 1) / T;
    }

    cout << sum << endl;
    cout << N / P << ' ' << N % P;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    int M = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        M = max(M, v[i]);
    }

    double sum = 0;
    for (int i : v)
    {
        sum += (double)i / M;
    }

    cout << sum / N * 100;
}
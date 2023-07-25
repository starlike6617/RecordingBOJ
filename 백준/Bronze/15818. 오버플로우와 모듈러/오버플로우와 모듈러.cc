#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    long long res = 1;
    while (N--)
    {
        long long a;
        cin >> a;
        res = (res * a % M) % M;
    }
    cout << res;
}
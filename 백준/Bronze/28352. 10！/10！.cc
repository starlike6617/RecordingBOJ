#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    long long res = 6;
    for (int i = 11; i <= N; i++)
    {
        res *= i;
    }
    cout << res;
}
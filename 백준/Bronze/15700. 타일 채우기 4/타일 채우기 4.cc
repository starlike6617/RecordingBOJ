#include <iostream>
using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;

    if (N % 2 == 1 && M % 2 == 1)
        cout << (N * M - 1) / 2;
    else
        cout << N * M / 2;
}
#include <iostream>
using namespace std;

int main()
{
    int K, N, M, money;
    cin >> K >> N >> M;

    money = K * N - M;
    if (money > 0)
        cout << money;
    else
        cout << 0;
}
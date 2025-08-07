#include <iostream>
using namespace std;

int main()
{
    int C, K, P;
    cin >> C >> K >> P;

    int sum = 0;
    for (int i = 1; i <= C; i++)
    {
        sum += K * i + P * i * i;
    }

    cout << sum;
}
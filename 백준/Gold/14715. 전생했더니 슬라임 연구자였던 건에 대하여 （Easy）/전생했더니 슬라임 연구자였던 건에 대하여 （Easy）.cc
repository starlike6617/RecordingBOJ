#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int K;
    cin >> K;

    int cnt = 0; // K의 소인수의 개수
    for (int i = 2; i * i <= K; i++)
    {
        while (K % i == 0)
        {
            cnt++;
            K /= i;
        }
    }

    if (K != 1)
    {
        cnt++;
    }

    cout << ceil(log2((double)cnt));
}
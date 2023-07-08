#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    int cnt = 0;
    while (N != 1)
    {
        if (N % 2 == 0)
        {
            N /= 2;
        }
        else
        {
            N = N * 3 + 1;
        }
        cnt++;
    }
    cout << cnt;
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i *= 10)
    {
        cnt += N - i + 1;
    }
    cout << cnt;
}
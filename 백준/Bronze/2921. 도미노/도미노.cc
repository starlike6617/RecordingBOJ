#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= i; j++)
            res += i + j;
    cout << res;
}
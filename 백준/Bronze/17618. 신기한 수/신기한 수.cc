#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        int num = i;

        int sum = 0;
        while (num)
        {
            sum += num % 10;
            num /= 10;
        }

        if (i % sum == 0)
        {
            cnt++;
        }
    }

    cout << cnt;
}
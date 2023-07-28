#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    for (int A = 1; A < N; A++)
    {
        for (int B = 1; B < N; B++)
        {
            for (int C = 1; C < N; C++)
            {
                if (A + B + C == N && C >= B + 2 && A % 2 == 0)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
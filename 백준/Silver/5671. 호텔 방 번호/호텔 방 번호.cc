#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M)
    {
        int cnt = M - N + 1;
        for (int i = N; i <= M; i++)
        {
            vector<bool> v(10);
            int temp = i;

            while (temp)
            {
                if (v[temp % 10])
                {
                    cnt--;
                    break;
                }

                v[temp % 10] = true;
                temp /= 10;
            }
        }

        cout << cnt << endl;
    }
}
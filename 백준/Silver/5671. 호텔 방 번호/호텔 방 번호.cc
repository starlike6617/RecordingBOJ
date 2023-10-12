#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    while (cin >> N >> M)
    {
        int cnt = 0;
        for (int i = N; i <= M; i++)
        {
            int num[10] = {};
            int tmp = i;
            bool isUnique = true;

            while (tmp)
            {
                num[tmp % 10]++;
                if (num[tmp % 10] > 1)
                {
                    isUnique = false;
                    break;
                }
                tmp /= 10;
            }

            if (isUnique)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
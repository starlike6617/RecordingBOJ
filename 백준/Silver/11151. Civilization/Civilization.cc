#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

class Region
{
public:
    int w = 0;
    int c = 0;
    int f = 0;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int W, C, F;
        cin >> W >> C >> F;

        Region arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i].w >> arr[i].c >> arr[i].f;
        }

        int res = 19;
        for (int BITS = 1; BITS < (1 << N); BITS++)
        {
            Region sum;
            int cnt = 0;

            for (int i = 0; i < N; i++)
            {
                if (BITS & (1 << i))
                {
                    sum.w += arr[i].w;
                    sum.c += arr[i].c;
                    sum.f += arr[i].f;

                    cnt++;
                }
            }

            if (sum.w >= W && sum.c >= C && sum.f >= F)
            {
                res = min(res, cnt);
            }
        }

        if (res == 19)
        {
            cout << "game over" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
}
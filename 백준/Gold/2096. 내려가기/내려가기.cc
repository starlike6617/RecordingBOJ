#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> maxV(3), minV(3), lastMaxV(3), lastMinV(3);
    for (int n = 0; n < N; n++)
    {
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        if (n == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                maxV[i] = minV[i] = lastMaxV[i] = lastMinV[i] = v[i];
            }
        }
        else
        {
            maxV[0] = max(lastMaxV[0], lastMaxV[1]) + v[0];
            minV[0] = min(lastMinV[0], lastMinV[1]) + v[0];

            maxV[1] = max({lastMaxV[0], lastMaxV[1], lastMaxV[2]}) + v[1];
            minV[1] = min({lastMinV[0], lastMinV[1], lastMinV[2]}) + v[1];

            maxV[2] = max(lastMaxV[1], lastMaxV[2]) + v[2];
            minV[2] = min(lastMinV[1], lastMinV[2]) + v[2];

            for (int i = 0; i < 3; i++)
            {
                lastMaxV[i] = maxV[i];
                lastMinV[i] = minV[i];
            }
        }
    }

    cout << max({maxV[0], maxV[1], maxV[2]}) << ' ' << min({minV[0], minV[1], minV[2]});
}
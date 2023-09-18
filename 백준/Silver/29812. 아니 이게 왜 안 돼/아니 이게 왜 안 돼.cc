#include <iostream>
using namespace std;

int main()
{
    int N, D, M;
    string S;
    cin >> N >> S >> D >> M;

    int limit = 1;
    while (D * limit < M + D)
    {
        limit++;
    }

    int cnt = 0;
    int cntHYU[3] = {};
    int energy = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'H' || S[i] == 'Y' || S[i] == 'U')
        {
            if (cnt >= limit)
            {
                energy += M + D;
            }
            else
            {
                energy += D * cnt;
            }
            cnt = 0;

            if (S[i] == 'H')
            {
                cntHYU[0]++;
            }
            else if (S[i] == 'Y')
            {
                cntHYU[1]++;
            }
            else if (S[i] == 'U')
            {
                cntHYU[2]++;
            }
        }
        else
        {
            cnt++;
        }
    }

    if (cnt)
    {
        if (cnt >= limit)
        {
            energy += M + D;
        }
        else
        {
            energy += D * cnt;
        }
    }

    if (energy)
    {
        cout << energy << endl;
    }
    else
    {
        cout << "Nalmeok" << endl;
    }

    int HYU = min(cntHYU[0], min(cntHYU[1], cntHYU[2]));
    if (HYU)
    {
        cout << HYU;
    }
    else
    {
        cout << "I love HanYang University";
    }
}
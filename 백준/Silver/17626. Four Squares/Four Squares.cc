#include <iostream>
#include <cmath>
#define endl '\n'
using namespace std;

bool isSquareNum(int num)
{
    double sqrtNum = sqrt(num);

    if (sqrtNum == (int)sqrtNum)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    int minCnt = 4;
    for (int a = 0; a <= 223; a++)
    {
        for (int b = 0; b <= 223; b++)
        {
            for (int c = 0; c <= 223; c++)
            {
                int cnt = 0;
                if (n == a * a + b * b + c * c)
                {
                    if (a != 0)
                        cnt++;
                    if (b != 0)
                        cnt++;
                    if (c != 0)
                        cnt++;
                    minCnt = min(minCnt, cnt);
                }
                else if (isSquareNum(n - a * a - b * b - c * c))
                {
                    cnt = 4;
                    minCnt = min(minCnt, cnt);
                }
            }
        }
    }

    cout << minCnt;
}
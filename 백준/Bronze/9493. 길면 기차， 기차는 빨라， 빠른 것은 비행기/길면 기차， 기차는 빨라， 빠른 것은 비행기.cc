#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true)
    {
        int M, A, B;
        cin >> M >> A >> B;

        if (M == 0 && A == 0 && B == 0)
        {
            break;
        }

        double t1 = M / (double)A * 3600;
        double t2 = M / (double)B * 3600;

        int t = round(abs(t1 - t2));
        printf("%d:%02d:%02d\n", t / 3600, t % 3600 / 60, t % 3600 % 60);
    }
}
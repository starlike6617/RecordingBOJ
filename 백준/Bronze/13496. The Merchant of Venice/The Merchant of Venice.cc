#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    for (int i = 0; i < K; i++)
    {
        int n, s, d;
        cin >> n >> s >> d;

        long long res = 0;
        while (n--)
        {
            int di, vi;
            cin >> di >> vi;

            if ((double)di / s <= d)
                res += vi;
        }

        cout << "Data Set " << i + 1 << ":\n";
        cout << res << "\n\n";
    }
}
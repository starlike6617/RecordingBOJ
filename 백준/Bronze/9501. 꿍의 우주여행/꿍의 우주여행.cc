#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, D;
        cin >> N >> D;

        int cnt = 0;
        while (N--)
        {
            double v, f, c;
            cin >> v >> f >> c;

            if (D / v * c <= f)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
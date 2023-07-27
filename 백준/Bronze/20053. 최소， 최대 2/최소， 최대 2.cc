#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int minV = 1000001, maxV = -1000001;
        while (N--)
        {
            int a;
            cin >> a;

            maxV = max(maxV, a);
            minV = min(minV, a);
        }
        cout << minV << ' ' << maxV << endl;
    }
}
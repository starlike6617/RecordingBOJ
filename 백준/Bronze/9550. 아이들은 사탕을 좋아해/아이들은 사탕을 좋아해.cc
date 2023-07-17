#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;

        int res = 0;
        while (N--)
        {
            int num;
            cin >> num;
            res += num / K;
        }
        cout << res << endl;
    }
}
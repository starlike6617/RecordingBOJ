#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int cnt = 0;
        for (int i = 2; i <= N; i++)
        {
            int temp = N;
            while (temp % i == 0)
            {
                cnt++;
                temp /= i;
            }
        }
        cout << cnt << endl;
    }
}
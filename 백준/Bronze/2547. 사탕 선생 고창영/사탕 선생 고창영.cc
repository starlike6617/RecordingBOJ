#include <iostream>
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

        long long sum = 0;
        for (int i = 0; i < N; i++)
        {
            long long a;
            cin >> a;
            sum = (sum + a) % N;
        }

        cout << (sum % N == 0 ? "YES" : "NO") << '\n';
    }
}
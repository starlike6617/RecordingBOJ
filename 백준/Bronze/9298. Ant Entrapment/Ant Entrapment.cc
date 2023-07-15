#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int N;
        cin >> N;

        double arr[4] = {1001, -1001, 1001, -1001};
        while (N--)
        {
            double X, Y;
            cin >> X >> Y;

            arr[0] = min(arr[0], X);
            arr[1] = max(arr[1], X);
            arr[2] = min(arr[2], Y);
            arr[3] = max(arr[3], Y);
        }

        cout << fixed;
        cout.precision(10);

        cout << "Case " << i << ": ";
        cout << "Area " << (arr[1] - arr[0]) * (arr[3] - arr[2]) << ", ";
        cout << "Perimeter " << 2 * ((arr[1] - arr[0]) + (arr[3] - arr[2])) << '\n';
    }
}
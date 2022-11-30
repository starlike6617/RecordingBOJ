#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;

    while (c--)
    {
        int n, cnt = 0;
        cin >> n;

        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        double avg = (double)sum / n;
        for (int i = 0; i < n; i++)
            if (arr[i] > avg)
                cnt++;

        double res = (double)cnt / n * 100;
        cout << fixed;
        cout.precision(3);
        cout << res << '%' << endl;
    }
}
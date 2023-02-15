#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 0)
    {
        cout << "divide by zero";
        return 0;
    }

    int arr[N], sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    double res1, res2 = 0, ans;
    res1 = (double)sum / N;
    for (int i = 0; i < N; i++)
        res2 += (double)arr[i] / N;
    ans = res1 / res2;

    cout << fixed;
    cout.precision(2);
    cout << ans;
}
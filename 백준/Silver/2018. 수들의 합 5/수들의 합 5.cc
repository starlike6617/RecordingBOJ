#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int left = 1, right = 1;
    int sum = 1;
    int cnt = 0;

    while (left <= right)
    {
        if (sum == N)
        {
            cnt++;
            right++;
            sum += right;
        }
        else if (sum < N)
        {
            right++;
            sum += right;
        }
        else
        {
            sum -= left;
            left++;
        }
    }

    cout << cnt;
}
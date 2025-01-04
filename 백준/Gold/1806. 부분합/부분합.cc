#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    int left = 0, right = 0;
    int sum = v[0];
    int res = 100001;

    while (left <= right && right < N)
    {
        if (sum < S)
        {
            right++;
            sum += v[right];
        }
        else
        {
            res = min(res, right - left + 1);
            sum -= v[left];
            left++;
        }
    }

    cout << (res == 100001 ? 0 : res);
}
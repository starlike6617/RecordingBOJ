#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        int left = 0, right = N - 1;
        while (left < right)
        {
            if (left == i)
            {
                left++;
            }
            else if (right == i)
            {
                right--;
            }

            if (left >= right)
            {
                break;
            }

            int sum = v[left] + v[right];

            if (sum == v[i])
            {
                cnt++;
                break;
            }
            else if (sum < v[i])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << cnt;
}
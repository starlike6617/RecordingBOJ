#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long cnt = 0;
    for (int i = 0; i < N - 2; i++)
    {
        int left = i + 1, right = N - 1;
        while (left < right)
        {
            int sum = v[i] + v[left] + v[right];
            if (sum == 0)
            {
                if (v[left] == v[right])
                {
                    cnt += (right - left + 1) * (right - left) / 2;
                    break;
                }
                else
                {
                    int cntL = 0, cntR = 0;
                    int prevL = v[left], prevR = v[right];

                    while (v[left] == prevL)
                    {
                        cntL++;
                        left++;
                    }
                    while (v[right] == prevR)
                    {
                        cntR++;
                        right--;
                    }

                    cnt += cntL * cntR;
                }
            }
            else if (sum < 0)
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
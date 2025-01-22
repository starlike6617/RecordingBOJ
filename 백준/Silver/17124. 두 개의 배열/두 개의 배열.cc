#include <iostream>
#include <vector>
#include <algorithm>
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
        int n, m;
        cin >> n >> m;

        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        vector<int> B(m);
        for (int i = 0; i < m; i++)
        {
            cin >> B[i];
        }
        sort(B.begin(), B.end());

        long long sum = 0;
        for (int a : A)
        {
            int s = 0, e = m - 1;
            int gap = 1000000001;
            int num = 1000000001;

            while (s <= e)
            {
                int mid = (s + e) / 2;
                int curGap = abs(B[mid] - a);

                if (curGap < gap || (curGap == gap && B[mid] < num))
                {
                    gap = curGap;
                    num = B[mid];
                }

                if (curGap == 0)
                {
                    break;
                }

                if (B[mid] < a)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }

            sum += num;
        }

        cout << sum << endl;
    }
}
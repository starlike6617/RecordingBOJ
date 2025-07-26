#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(8);
    v = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};

    string res = "";
    for (int i = 0; i < n; i++)
    {
        vector<int> diff(8);
        for (int j = 0; j < 6; j++)
        {
            char c;
            cin >> c;

            for (int k = 0; k < 8; k++)
            {
                if (c != v[k][j])
                {
                    diff[k]++;
                }
            }
        }

        int minDiff = 7;
        for (int j = 0; j < 8; j++)
        {
            minDiff = min(minDiff, diff[j]);
        }

        int minDiffCnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (minDiff == diff[j])
            {
                minDiffCnt++;
            }
        }

        if (minDiffCnt > 1)
        {
            res = to_string(i + 1);
            break;
        }

        for (int j = 0; j < 8; j++)
        {
            if (minDiff == diff[j])
            {
                res += (char)('A' + j);
                break;
            }
        }
    }

    cout << res;
}
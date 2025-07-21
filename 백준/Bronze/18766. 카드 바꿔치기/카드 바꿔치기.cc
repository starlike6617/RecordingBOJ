#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<string> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        sort(v1.begin(), v1.end());

        vector<string> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        sort(v2.begin(), v2.end());

        bool isCheater = false;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
                isCheater = true;
                break;
            }
        }

        cout << (isCheater ? "CHEATER" : "NOT CHEATER") << endl;
    }
}
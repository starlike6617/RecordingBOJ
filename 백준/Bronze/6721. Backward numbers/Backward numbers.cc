#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string a, b;
        cin >> a >> b;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int sum = stoi(a) + stoi(b);
        string res = to_string(sum);

        reverse(res.begin(), res.end());

        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] != '0')
            {
                res = res.substr(i);
                break;
            }
        }

        cout << res << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string a, b;
        cin >> a >> b;

        int n = a.size(), m = b.size();
        int carry = 0;
        string ans = "";

        for (int i = 0; i < max(n, m); i++)
        {
            int x = i < n ? a[n - i - 1] - '0' : 0;
            int y = i < m ? b[m - i - 1] - '0' : 0;

            int sum = x + y + carry;
            ans = char(sum % 2 + '0') + ans;
            carry = sum / 2;
        }

        if (carry)
            ans = '1' + ans;

        while (ans.size() > 1 && ans[0] == '0')
            ans.erase(0, 1);

        cout << ans << endl;
    }
}
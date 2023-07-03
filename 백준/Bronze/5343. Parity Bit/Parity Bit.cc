#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < s.size() / 8; i++)
        {
            int one = 0;
            for (int j = i * 8; j < i * 8 + 7; j++)
                if (s[j] == '1')
                    one++;

            if (one % 2 == 0 && s[i * 8 + 7] == '1')
                cnt++;
            else if (one % 2 == 1 && s[i * 8 + 7] == '0')
                cnt++;
        }
        cout << cnt << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string str;
        cin >> str;

        int cnt = 0;
        for (char ch : str)
        {
            if (ch == 'U')
                cnt++;
            else
                break;
        }
        cout << cnt << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int idx;
        string s;
        cin >> idx >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (i != idx - 1)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}
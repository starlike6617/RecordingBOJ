#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        cout << "String #" << i << endl;

        for (char c : s)
        {
            if (c == 'Z')
            {
                cout << 'A';
            }
            else
            {
                cout << (char)(c + 1);
            }
        }
        cout << endl
             << endl;
    }
}
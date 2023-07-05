#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (c + i > 'Z')
                    cout << (char)((c + i) % 'Z' + 'A' - 1);
                else
                    cout << (char)(c + i);
            }
            cout << endl;
        }
        cout << endl;
    }
}
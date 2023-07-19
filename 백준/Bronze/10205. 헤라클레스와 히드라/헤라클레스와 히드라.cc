#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    for (int i = 1; i <= K; i++)
    {
        int h;
        string s;
        cin >> h >> s;

        for (char c : s)
        {
            if (c == 'c')
            {
                h++;
            }
            else
            {
                h--;
            }
        }

        cout << "Data Set " << i << ":" << endl;
        cout << h << endl
             << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string res;
    cin >> res;

    N--;
    while (N--)
    {
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != res[i])
                res[i] = '?';
        }
    }
    cout << res;
}
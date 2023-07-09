#include <iostream>
using namespace std;

int main()
{
    int TC;
    cin >> TC;

    for (int i = 1; i <= TC; i++)
    {
        int N;
        string S;
        cin >> N >> S;

        cout << '#' << i << ' ';
        if (S.size() % 2 == 0 && S.substr(0, S.size() / 2) == S.substr(S.size() / 2))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string s;
        cin >> s;

        if (s[s.size() / 2 - 1] == s[s.size() / 2])
        {
            cout << "Do-it" << endl;
        }
        else
        {
            cout << "Do-it-Not" << endl;
        }
    }
}
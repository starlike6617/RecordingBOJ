#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;

        for (char ch : str)
        {
            if ('A' <= ch && ch <= 'Z')
                cout << (char)(ch - 'A' + 'a');
            else
                cout << (char)ch;
        }
        cout << endl;
    }
}
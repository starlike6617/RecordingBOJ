#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s;
        getline(cin, s);

        s[0] = toupper(s[0]);
        cout << s << endl;
    }
}
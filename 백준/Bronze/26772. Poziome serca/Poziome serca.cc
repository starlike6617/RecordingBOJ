#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << " @@@   @@@ ";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "@   @ @   @";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "@    @    @";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "@         @";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << " @       @ ";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "  @     @  ";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "   @   @   ";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "    @ @    ";
        if (i != N - 1)
            cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "     @     ";
        if (i != N - 1)
            cout << ' ';
    }
}
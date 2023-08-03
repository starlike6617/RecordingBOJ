#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr1[53] = {};
    while (N--)
    {
        int a;
        cin >> a;
        arr1[a]++;
    }

    string s;
    cin.ignore();
    getline(cin, s);

    int arr2[53] = {};
    for (char c : s)
    {
        if (c == ' ')
        {
            arr2[0]++;
        }
        else if ('A' <= c && c <= 'Z')
        {
            arr2[c - 'A' + 1]++;
        }
        else
        {
            arr2[c - 'a' + 27]++;
        }
    }

    bool res = true;
    for (int i = 0; i < 53; i++)
    {
        if (arr1[i] != arr2[i])
        {
            res = false;
            break;
        }
    }
    cout << (res ? 'y' : 'n');
}
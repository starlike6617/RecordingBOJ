#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int arr[4] = {13, 13, 13, 13};
    unordered_set<string> us;

    for (int i = 0; i < s.size(); i += 3)
    {
        string card = s.substr(i, 3);
        us.insert(card);

        if (card[0] == 'P')
        {
            arr[0]--;
        }
        else if (card[0] == 'K')
        {
            arr[1]--;
        }
        else if (card[0] == 'H')
        {
            arr[2]--;
        }
        else if (card[0] == 'T')
        {
            arr[3]--;
        }
    }

    if (us.size() != s.size() / 3)
    {
        cout << "GRESKA";
    }
    else
    {
        for (int i : arr)
        {
            cout << i << ' ';
        }
    }
}
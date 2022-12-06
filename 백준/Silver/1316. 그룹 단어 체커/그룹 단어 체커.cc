#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    while (n--)
    {
        string str;
        cin >> str;

        int arr[26] = {};
        int i;
        for (i = 0; i < str.size(); i++)
        {
            if (arr[str[i] - 'a'] == 1 && str[i - 1] != str[i])
                break;
            else
                arr[str[i] - 'a'] = 1;
        }
        if (i == str.size())
            cnt++;
    }

    cout << cnt;
}
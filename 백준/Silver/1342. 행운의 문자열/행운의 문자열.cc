#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

    sort(str.begin(), str.end());

    int cnt = 0;
    do
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == str[i + 1])
                break;
            if (i == str.size() - 1)
                cnt++;
        }
    } while (next_permutation(str.begin(), str.end()));

    cout << cnt;
}
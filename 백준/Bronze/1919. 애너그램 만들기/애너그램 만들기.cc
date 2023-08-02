#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int alp1[26] = {};
    for (char c : s1)
    {
        alp1[c - 'a']++;
    }

    int alp2[26] = {};
    for (char c : s2)
    {
        alp2[c - 'a']++;
    }

    int res = 0;
    for (int i = 0; i < 26; i++)
    {
        res += abs(alp1[i] - alp2[i]);
    }
    cout << res;
}
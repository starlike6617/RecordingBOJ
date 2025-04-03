#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define endl '\n'
using namespace std;

string toPattern(string &s)
{
    map<char, char> m;
    string ret = "";
    char nextChar = 'a';

    for (char c : s)
    {
        if (m.find(c) == m.end())
        {
            m[c] = nextChar;
            nextChar++;
        }
        ret += m[c];
    }

    return ret;
}

int main()
{
    int N;
    cin >> N;

    vector<string> v(N);
    unordered_map<string, int> cntMap;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        v[i] = toPattern(s);
        cntMap[v[i]]++;
    }

    int res = 0;
    for (auto &p : cntMap)
    {
        res += (p.second * (p.second - 1)) / 2;
    }

    cout << res;
}
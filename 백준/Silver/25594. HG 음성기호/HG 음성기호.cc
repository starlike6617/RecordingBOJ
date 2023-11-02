#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    vector<pair<char, string>> v;
    v.push_back({'a', "aespa"});
    v.push_back({'b', "baekjoon"});
    v.push_back({'c', "cau"});
    v.push_back({'d', "debug"});
    v.push_back({'e', "edge"});
    v.push_back({'f', "firefox"});
    v.push_back({'g', "golang"});
    v.push_back({'h', "haegang"});
    v.push_back({'i', "iu"});
    v.push_back({'j', "java"});
    v.push_back({'k', "kotlin"});
    v.push_back({'l', "lol"});
    v.push_back({'m', "mips"});
    v.push_back({'n', "null"});
    v.push_back({'o', "os"});
    v.push_back({'p', "python"});
    v.push_back({'q', "query"});
    v.push_back({'r', "roka"});
    v.push_back({'s', "solvedac"});
    v.push_back({'t', "tod"});
    v.push_back({'u', "unix"});
    v.push_back({'v', "virus"});
    v.push_back({'w', "whale"});
    v.push_back({'x', "xcode"});
    v.push_back({'y', "yahoo"});
    v.push_back({'z', "zebra"});

    string s;
    cin >> s;

    string res = "";
    bool isHG = true;
    for (int i = 0; i < s.size(); i++)
    {
        string str = v[s[i] - 'a'].second;
        if (s.substr(i, str.size()) != str)
        {
            isHG = false;
            res = "ERROR!";
            break;
        }

        res += v[s[i] - 'a'].first;
        i += str.size() - 1;
    }

    if (isHG)
    {
        cout << "It's HG!" << endl;
    }
    cout << res;
}
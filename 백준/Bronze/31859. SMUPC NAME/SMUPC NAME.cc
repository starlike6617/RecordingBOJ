#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    vector<bool> alp(26);
    string res = "";
    int cnt = 0;

    for (char c : S)
    {
        if (!alp[c - 'a'])
        {
            alp[c - 'a'] = true;
            res += c;
        }
        else
        {
            cnt++;
        }
    }

    res = to_string(N + 1906) + res + to_string(cnt + 4);

    cout << "smupc_";
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
}
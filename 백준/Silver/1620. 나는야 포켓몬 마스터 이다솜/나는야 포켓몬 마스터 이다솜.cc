#include <iostream>
#include <unordered_map>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> m1;
    unordered_map<int, string> m2;

    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;

        m1[s] = i;
        m2[i] = s;
    }

    while (M--)
    {
        string s;
        cin >> s;

        // 첫 문자가 숫자일 경우
        if ((to_string(s[0] - '0') == s.substr(0, 1)))
        {
            cout << m2[stoi(s)] << endl;
        }
        else
        {
            cout << m1[s] << endl;
        }
    }
}
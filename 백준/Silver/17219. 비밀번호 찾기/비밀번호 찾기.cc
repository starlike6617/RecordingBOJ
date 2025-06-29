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

    unordered_map<string, string> m;
    while (N--)
    {
        string address, pw;
        cin >> address >> pw;
        m[address] = pw;
    }

    while (M--)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}
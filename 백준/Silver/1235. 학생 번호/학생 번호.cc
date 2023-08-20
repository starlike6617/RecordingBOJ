#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string s[N];
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    string res[N] = {};
    bool unique = false;
    int cnt = 0;

    while (!unique)
    {
        for (int i = 0; i < N; i++)
        {
            res[i] = s[i].back() + res[i];
            s[i].pop_back();
        }

        unordered_set<string> us(res, res + N);
        unique = (us.size() == N);

        cnt++;
    }

    cout << cnt;
}
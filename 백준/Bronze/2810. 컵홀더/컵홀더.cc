#include <iostream>
using namespace std;

int main()
{
    int N;
    string s;
    cin >> N >> s;

    int cnt = N, cntLL = 0;
    for (int i = 0; i < N; i++)
    {
        if (i < N - 1 && s.substr(i, 2) == "LL")
        {
            cntLL++;
            i++;
        }
    }

    if (cntLL > 1)
    {
        cout << cnt - cntLL + 1;
    }
    else
    {
        cout << cnt;
    }
}
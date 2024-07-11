#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    string name[N], chat[N];
    int idx = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> name[i] >> chat[i];
        if (name[i] == S)
            idx = i;
    }

    int cnt = 0;
    for (int i = 0; i < idx; i++)
        if (chat[i] == chat[idx])
            cnt++;

    cout << cnt;
}
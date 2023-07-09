#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    char stu[N];
    for (int i = 0; i < N; i++)
    {
        cin >> stu[i];
    }

    char ans[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ans[i];
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (stu[i] == ans[i])
        {
            cnt++;
        }
    }
    cout << cnt;
}
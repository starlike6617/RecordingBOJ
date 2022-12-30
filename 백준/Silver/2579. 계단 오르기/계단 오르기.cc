#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int score[n + 1], ans[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> score[i];

    ans[1] = score[1];
    ans[2] = score[1] + score[2];
    ans[3] = max(score[1], score[2]) + score[3];

    for (int i = 4; i <= n; i++)
        ans[i] = max(ans[i - 2], ans[i - 3] + score[i - 1]) + score[i];

    cout << ans[n];
}
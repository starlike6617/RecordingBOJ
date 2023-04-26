#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool isIn[200001] = {};
    int N, a, b, cnt = 0;
    cin >> N;

    while (N--)
    {
        cin >> a >> b;

        if (b == 1)
        {
            if (isIn[a] == false)
                isIn[a] = true;
            else
                cnt++;
        }
        else if (b == 0)
        {
            if (isIn[a] == true)
                isIn[a] = false;
            else
                cnt++;
        }
    }

    for (int i = 1; i < 200001; i++)
        if (isIn[i] == true)
            cnt++;

    cout << cnt;
}
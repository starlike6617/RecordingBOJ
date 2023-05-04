#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int numArr[N], strikeArr[N], ballArr[N];
    for (int i = 0; i < N; i++)
        cin >> numArr[i] >> strikeArr[i] >> ballArr[i];

    int cnt = 0;
    for (int i = 123; i <= 987; i++)
    {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;

        if (a == b || b == c || c == a || a == 0 || b == 0 || c == 0)
            continue;

        bool flag = true;
        for (int j = 0; j < N; j++)
        {
            int num = numArr[j];
            int strike = strikeArr[j];
            int ball = ballArr[j];

            int a2 = num / 100;
            int b2 = (num / 10) % 10;
            int c2 = num % 10;

            int strike2 = 0, ball2 = 0;
            if (a == a2)
                strike2++;
            else if (a == b2 || a == c2)
                ball2++;
            if (b == b2)
                strike2++;
            else if (b == c2 || b == a2)
                ball2++;
            if (c == c2)
                strike2++;
            else if (c == a2 || c == b2)
                ball2++;

            if (strike != strike2 || ball != ball2)
                flag = false;
        }

        if (flag)
            cnt++;
    }

    cout << cnt;
}
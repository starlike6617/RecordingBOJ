#include <iostream>
using namespace std;

int getScore(string s)
{
    if (s == "F")
        return 0;

    int result = (4 - s[0] + 'A') * 1000;
    if (s[1] == '+')
        result += 300;
    else if (s[1] == '-')
        result -= 300;
    return result;
}

int main()
{
    int N;
    cin >> N;

    int sum = 0, sumCredit = 0;
    while (N--)
    {
        string className, score;
        int credit;
        cin >> className >> credit >> score;

        sum += credit * getScore(score);
        sumCredit += credit;
    }

    int res = sum / sumCredit;
    if (res % 10 >= 5)
        res += 10;
    res /= 10;

    printf("%.2f", (double)res / 100);
}
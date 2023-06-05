#include <iostream>
using namespace std;

int main()
{
    int winner = 0;
    int maxScore = 0;

    for (int i = 0; i < 5; i++)
    {
        int score = 0;
        for (int j = 0; j < 4; j++)
        {
            int temp;
            cin >> temp;
            score += temp;
        }

        if (score > maxScore)
        {
            maxScore = score;
            winner = i + 1;
        }
    }

    cout << winner << ' ' << maxScore;
}
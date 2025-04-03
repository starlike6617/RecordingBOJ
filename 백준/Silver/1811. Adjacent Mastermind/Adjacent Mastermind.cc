#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{

    while (true)
    {
        string target;
        cin >> target;
        if (target == "#")
        {
            break;
        }

        string guess;
        cin >> guess;

        int n = target.length();
        vector<bool> targetUsed(n, false);
        vector<bool> guessUsed(n, false);

        int black = 0;
        for (int i = 0; i < n; i++)
        {
            if (target[i] == guess[i])
            {
                black++;
                targetUsed[i] = true;
                guessUsed[i] = true;
            }
        }

        int grey = 0;
        for (int i = 0; i < n; i++)
        {
            if (guessUsed[i])
            {
                continue;
            }

            if (i > 0 && !targetUsed[i - 1] && target[i - 1] == guess[i])
            {
                grey++;
                targetUsed[i - 1] = true;
                guessUsed[i] = true;
                continue;
            }

            if (i < n - 1 && !targetUsed[i + 1] && target[i + 1] == guess[i])
            {
                grey++;
                targetUsed[i + 1] = true;
                guessUsed[i] = true;
            }
        }

        int white = 0;
        for (int i = 0; i < n; i++)
        {
            if (guessUsed[i])
            {
                continue;
            }

            for (int j = 0; j < n; j++)
            {
                if (!targetUsed[j] && abs(i - j) >= 2 && target[j] == guess[i])
                {
                    white++;
                    targetUsed[j] = true;
                    guessUsed[i] = true;
                    break;
                }
            }
        }

        cout << guess << ": " << black << " black, " << grey << " grey, " << white << " white" << endl;
    }
}
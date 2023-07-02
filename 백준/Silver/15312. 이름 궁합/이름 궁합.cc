#include <iostream>
using namespace std;

string getScore(char a, char b)
{
    int res = a - '0' + b - '0';
    if (res >= 10)
        res -= 10;
    return to_string(res);
}

int main()
{
    string A, B;
    cin >> A >> B;

    int arr[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    string curScore = "", resScore = "";

    for (int i = 0; i < A.size(); i++)
    {
        curScore += to_string(arr[A[i] - 'A']);
        curScore += to_string(arr[B[i] - 'A']);
    }

    while (curScore.size() > 2)
    {
        for (int i = 0; i < curScore.size() - 1; i++)
            resScore += getScore(curScore[i], curScore[i + 1]);
        curScore = resScore;
        resScore = "";
    }

    cout << curScore;
}
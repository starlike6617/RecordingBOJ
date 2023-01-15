#include <iostream>
#include <algorithm>
using namespace std;

int ones(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] == 1)
            res += 1;
    return res + 2;
}

int twos(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] == 2)
            res += 2;
    return res + 4;
}

int threes(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] == 3)
            res += 3;
    return res + 6;
}

int fours(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] == 4)
            res += 4;
    return res + 8;
}

int fives(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] == 5)
            res += 5;
    return res + 10;
}

int sixes(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        if (arr[i] == 6)
            res += 6;
    return res + 12;
}

int fourOfAKind(int arr[3])
{
    if (arr[0] == arr[1] || arr[0] == arr[2])
        return arr[0] * 4;
    else if (arr[1] == arr[2])
        return arr[1] * 4;
    else
        return 0;
}

int fullHouse(int arr[3])
{
    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        if (arr[0] == 6)
            return arr[0] * 3 + 10;
        else
            return arr[0] * 3 + 12;
    }
    else if (arr[0] == arr[1] || arr[1] == arr[2])
    {
        if (arr[0] > arr[2])
            return arr[0] * 3 + arr[2] * 2;
        else
            return arr[0] * 2 + arr[2] * 3;
    }
    else
        return 0;
}

int littleStraight(int arr[3])
{
    if (arr[0] != 6 && arr[1] != 6 && arr[2] != 6 && arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0])
        return 30;
    else
        return 0;
}

int bigStraight(int arr[3])
{
    if (arr[0] != 1 && arr[1] != 1 && arr[2] != 1 && arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0])
        return 30;
    else
        return 0;
}

int yacht(int arr[3])
{
    if (arr[0] == arr[1] && arr[1] == arr[2])
        return 50;
    else
        return 0;
}

int choice(int arr[3])
{
    int res = 0;
    for (int i = 0; i < 3; i++)
        res += arr[i];
    return res + 12;
}

int main()
{
    string s;
    cin >> s;

    int arr[3], score[12];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);

    score[0] = ones(arr);
    score[1] = twos(arr);
    score[2] = threes(arr);
    score[3] = fours(arr);
    score[4] = fives(arr);
    score[5] = sixes(arr);
    score[6] = fourOfAKind(arr);
    score[7] = fullHouse(arr);
    score[8] = littleStraight(arr);
    score[9] = bigStraight(arr);
    score[10] = yacht(arr);
    score[11] = choice(arr);

    int max = 0;
    for (int i = 0; i < 12; i++)
        if (s[i] == 'Y')
            if (max < score[i])
                max = score[i];

    cout << max;
}
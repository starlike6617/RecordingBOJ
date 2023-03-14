#include <iostream>
using namespace std;

char zero[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
};
char one[7][5] = {
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
};
char two[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', '.'},
    {'x', '.', '.', '.', '.'},
    {'x', 'x', 'x', 'x', 'x'},
};
char three[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
};
char four[7][5] = {
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
};
char five[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', '.'},
    {'x', '.', '.', '.', '.'},
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
};
char six[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', '.'},
    {'x', '.', '.', '.', '.'},
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
};
char seven[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
};
char eight[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
};
char nine[7][5] = {
    {'x', 'x', 'x', 'x', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'.', '.', '.', '.', 'x'},
    {'x', 'x', 'x', 'x', 'x'},
};
char plusExp[7][5] = {
    {'.', '.', '.', '.', '.'},
    {'.', '.', 'x', '.', '.'},
    {'.', '.', 'x', '.', '.'},
    {'x', 'x', 'x', 'x', 'x'},
    {'.', '.', 'x', '.', '.'},
    {'.', '.', 'x', '.', '.'},
    {'.', '.', '.', '.', '.'},
};

bool isEqual(char a[7][5], char b[7][5]);
int toNum(char n[7][5]);
char (*toAscii(int n))[5];

char exp[7][120];

int main()
{
    int size;
    for (int i = 0; i < 7; i++)
    {
        string temp;
        cin >> temp;

        size = temp.size();

        for (int j = 0; j < size; j++)
            exp[i][j] = temp[j];
    }

    int x = 0, y = 0;
    bool isX = true;
    for (int k = 0; k < size; k += 6)
    {
        char temp[7][5];
        for (int i = 0; i < 7; i++)
            for (int j = 0; j < 5; j++)
                temp[i][j] = exp[i][j + k];

        if (isEqual(temp, plusExp))
            isX = false;
        else if (isX)
            x = x * 10 + toNum(temp);
        else
            y = y * 10 + toNum(temp);
    }

    int z = x + y;
    int zSize = 0, t = z;
    while (t)
    {
        t /= 10;
        zSize++;
    }

    int arr[zSize];
    for (int i = 0; i < zSize; i++)
    {
        arr[zSize - i - 1] = z % 10;
        z /= 10;
    }

    int resSize = 6 * zSize - 1;
    char res[7][resSize + 1];
    for (int k = 0; k < resSize + 1; k += 6)
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 5; j++)
                res[i][j + k] = toAscii(arr[k / 6])[i][j];
            res[i][k + 5] = '.';
        }
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < resSize; j++)
            cout << res[i][j];
        cout << endl;
    }
}

bool isEqual(char a[7][5], char b[7][5])
{
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 5; j++)
            if (a[i][j] != b[i][j])
                return false;
    return true;
}

int toNum(char n[7][5])
{
    if (isEqual(n, zero))
        return 0;
    else if (isEqual(n, one))
        return 1;
    else if (isEqual(n, two))
        return 2;
    else if (isEqual(n, three))
        return 3;
    else if (isEqual(n, four))
        return 4;
    else if (isEqual(n, five))
        return 5;
    else if (isEqual(n, six))
        return 6;
    else if (isEqual(n, seven))
        return 7;
    else if (isEqual(n, eight))
        return 8;
    else if (isEqual(n, nine))
        return 9;
}

char (*toAscii(int n))[5]
{
    if (n == 0)
        return zero;
    else if (n == 1)
        return one;
    else if (n == 2)
        return two;
    else if (n == 3)
        return three;
    else if (n == 4)
        return four;
    else if (n == 5)
        return five;
    else if (n == 6)
        return six;
    else if (n == 7)
        return seven;
    else if (n == 8)
        return eight;
    else if (n == 9)
        return nine;
}
#include <stdio.h>

bool isSyntaxRight(char str[], int cnt, bool _isCpp)
{
    if (_isCpp)
    {
        if (str[0] == 95 || str[cnt - 1] == 95)
        {
            return false;
        }
        for (int i = 0; i < cnt; ++i)
        {
            if (str[i] == 95 && str[i + 1] == 95)
            {
                return false;
            }
            if (str[i] == 95 || (str[i] <= 122 && str[i] >= 97))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        if (str[0] <= 90 && str[0] >= 65)
        {
            return false;
        }
        for (int i = 0; i < cnt; ++i)
        {
            if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
            {
                continue;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int getLen(char str[])
{
    int cnt = 0;
    while (str[++cnt])
        ;
    return cnt;
}

bool isCpp(char str[], int cnt)
{
    for (int i = 0; i < cnt; ++i)
    {
        if (str[i] == '_')
        {
            return true;
        }
    }
    return false;
}

void cppToJava(char str[], int cnt)
{
    int i;
    for (i = 0; i < cnt; ++i)
    {
        if (str[i] == '_')
        {
            printf("%c", str[i + 1] - 32);
            ++i;
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}

void javaToCpp(char str[], int cnt)
{
    for (int i = 0; i < cnt; ++i)
    {
        if (str[i] < 97)
        {
            printf("_");
            printf("%c", str[i] + 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}

int main()
{
    char str[1000];
    scanf("%s", str);
    int cnt = getLen(str);
    bool _isCpp = isCpp(str, cnt);
    if (!isSyntaxRight(str, cnt, _isCpp))
    {
        printf("Error!");
        return 0;
    }
    if (_isCpp)
    {
        cppToJava(str, cnt);
    }
    else
    {
        javaToCpp(str, cnt);
    }
}
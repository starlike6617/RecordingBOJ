#include <iostream>
#include <algorithm>
using namespace std;

long long res;
string resNum, resStr;
bool isMadness = false;
bool isMinus = false;

void getResNum(string);
void getRes(string);
string resToStr(long long);
void getResStr(string);

int main()
{
    string S;
    cin >> S;

    getResNum(S);
    if (isMadness)
    {
        cout << "Madness!";
        return 0;
    }

    getRes(resNum);
    getResStr(resToStr(res));

    cout << resNum << endl;
    cout << resStr << endl;
}

void getResNum(string s)
{
    bool prevNum = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i, 4) == "ZERO")
        {
            resNum += "0";
            prevNum = true;
            i += 3;
        }
        else if (s.substr(i, 3) == "ONE")
        {
            resNum += "1";
            prevNum = true;
            i += 2;
        }
        else if (s.substr(i, 3) == "TWO")
        {
            resNum += "2";
            prevNum = true;
            i += 2;
        }
        else if (s.substr(i, 5) == "THREE")
        {
            resNum += "3";
            prevNum = true;
            i += 4;
        }
        else if (s.substr(i, 4) == "FOUR")
        {
            resNum += "4";
            prevNum = true;
            i += 3;
        }
        else if (s.substr(i, 4) == "FIVE")
        {
            resNum += "5";
            prevNum = true;
            i += 3;
        }
        else if (s.substr(i, 3) == "SIX")
        {
            resNum += "6";
            prevNum = true;
            i += 2;
        }
        else if (s.substr(i, 5) == "SEVEN")
        {
            resNum += "7";
            prevNum = true;
            i += 4;
        }
        else if (s.substr(i, 5) == "EIGHT")
        {
            resNum += "8";
            prevNum = true;
            i += 4;
        }
        else if (s.substr(i, 4) == "NINE")
        {
            resNum += "9";
            prevNum = true;
            i += 3;
        }
        else if (prevNum)
        {
            if (s.substr(i, 1) == "+")
            {
                resNum += "+";
                prevNum = false;
            }
            else if (s.substr(i, 1) == "-")
            {
                resNum += "-";
                prevNum = false;
            }
            else if (s.substr(i, 1) == "x")
            {
                resNum += "x";
                prevNum = false;
            }
            else if (s.substr(i, 1) == "/")
            {
                resNum += "/";
                prevNum = false;
            }
            else if (s.substr(i, 1) == "=")
            {
                resNum += "=";
                prevNum = false;
            }
            else
            {
                isMadness = true;
                break;
            }
        }
        else
        {
            isMadness = true;
            break;
        }
    }
}

void getRes(string s)
{
    int idx, opr;
    string tempStr = "";

    for (int i = 0; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
            tempStr.push_back(s[i]);
        else
        {
            idx = i;
            res += stoll(tempStr);
            tempStr = "";

            if (s[i] == '+')
                opr = 1;
            else if (s[i] == '-')
                opr = 2;
            else if (s[i] == 'x')
                opr = 3;
            else if (s[i] == '/')
                opr = 4;
            break;
        }
    }

    for (int i = idx + 1; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
            tempStr.push_back(s[i]);
        else
        {
            long long templl = stoll(tempStr);
            tempStr = "";

            if (opr == 1)
                res += templl;
            else if (opr == 2)
                res -= templl;
            else if (opr == 3)
                res *= templl;
            else if (opr == 4)
                res /= templl;
        }

        if (s[i] == '+')
            opr = 1;
        else if (s[i] == '-')
            opr = 2;
        else if (s[i] == 'x')
            opr = 3;
        else if (s[i] == '/')
            opr = 4;
        else if (s[i] == '=')
            break;
    }
}

string resToStr(long long ll)
{
    string s = "";

    if (ll < 0)
    {
        isMinus = true;
        ll *= -1;
    }
    else if (ll == 0)
        return "0";

    while (ll > 0)
    {
        s.push_back((ll % 10) + '0');
        ll /= 10;
    }

    reverse(s.begin(), s.end());

    return s;
}

void getResStr(string s)
{
    if (isMinus)
        resStr += "-";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            resStr += "ZERO";
        else if (s[i] == '1')
            resStr += "ONE";
        else if (s[i] == '2')
            resStr += "TWO";
        else if (s[i] == '3')
            resStr += "THREE";
        else if (s[i] == '4')
            resStr += "FOUR";
        else if (s[i] == '5')
            resStr += "FIVE";
        else if (s[i] == '6')
            resStr += "SIX";
        else if (s[i] == '7')
            resStr += "SEVEN";
        else if (s[i] == '8')
            resStr += "EIGHT";
        else if (s[i] == '9')
            resStr += "NINE";
    }
}
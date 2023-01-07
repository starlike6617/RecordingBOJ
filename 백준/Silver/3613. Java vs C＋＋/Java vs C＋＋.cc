#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str, res;
    cin >> str;

    bool isCpp = false;
    bool isJava = false;
    bool isRight = true;

    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
        {
            isCpp = true;
            res.push_back('_');
            res.push_back(tolower(str[i]));
        }
        else if ((str[i]) == '_')
        {
            isJava = true;
            if (i + 1 < str.size() && islower(str[i + 1]))
                res.push_back(toupper(str[i + 1]));
            else
            {
                isRight = false;
                cout << "Error!";
                break;
            }
            i++;
        }
        else
        {
            res.push_back(str[i]);
        }

        if ((isCpp && isJava) || isupper(str[0]) || str[0] == '_')
        {
            isRight = false;
            cout << "Error!";
            break;
        }
    }

    if (isRight)
        cout << res;
}

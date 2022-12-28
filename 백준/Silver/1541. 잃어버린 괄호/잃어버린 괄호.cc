#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int res = 0;
    string temp;
    bool plus = true;

    for (int i = 0; i < str.size(); i++)
    {
        if (0 <= str[i] - '0' && str[i] - '0' <= 9)
            temp += str[i];

        if (str[i] == '-' || str[i] == '+' || i == str.size() - 1)
        {
            if (plus)
                res += stoi(temp);
            else
                res -= stoi(temp);
            temp.clear();
        }
        if (str[i] == '-')
            plus = false;
    }

    cout << res;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> name(4);
    name = {"northlondo", "branksomeh", "koreainter", "stjohnsbur"};

    vector<vector<int>> dif(4, vector<int>(9));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            dif[i][j] = (name[i][j + 1] - name[i][j] + 26) % 26;
        }
    }

    string s;
    cin >> s;

    vector<bool> match(4, true);
    for (int i = 0; i < 9; i++)
    {
        int n = (s[i + 1] - s[i] + 26) % 26;

        for (int j = 0; j < 4; j++)
        {
            if (n != dif[j][i])
            {
                match[j] = false;
            }
        }
    }

    if (match[0])
    {
        cout << "NLCS";
    }
    else if (match[1])
    {
        cout << "BHA";
    }
    else if (match[2])
    {
        cout << "KIS";
    }
    else if (match[3])
    {
        cout << "SJA";
    }
}
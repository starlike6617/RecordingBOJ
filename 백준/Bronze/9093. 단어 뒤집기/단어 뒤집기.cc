#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string str;
        getline(cin, str);

        string word = "";
        for (int i = 0; i < str.size(); i++)
        {
            if (i == str.size() - 1)
            {
                string temp;
                temp += str[i];
                word += temp;

                reverse(word.begin(), word.end());
                cout << word << endl;
            }
            else if (str[i] != ' ')
            {
                string temp;
                temp += str[i];
                word += temp;
            }
            else
            {
                reverse(word.begin(), word.end());
                cout << word << ' ';
                word = "";
            }
        }
    }
}
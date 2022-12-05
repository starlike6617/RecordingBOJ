#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string p;
        cin >> p;

        int n;
        string str, temp;
        deque<int> d;
        cin >> n >> str;

        for (int i = 0; i < str.size(); i++)
        {
            if (n == 0)
                break;
            else if (isdigit(str[i]))
                temp += str[i];
            else if (str[i] == ',' || str[i] == ']')
            {
                d.push_back(stoi(temp));
                temp.clear();
            }
        }

        bool isRev = false;
        bool isError = false;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == 'R')
            {
                isRev = !isRev;
            }
            else if (p[i] == 'D')
            {
                if (!d.empty())
                {
                    if (isRev)
                        d.pop_back();
                    else
                        d.pop_front();
                }
                else
                {
                    isError = true;
                    break;
                }
            }
        }

        if (isError)
            cout << "error" << '\n';
        else
        {
            cout << '[';
            if (isRev)
            {
                for (int i = d.size() - 1; i >= 0; i--)
                {
                    if (i == 0)
                        cout << d[i];
                    else
                        cout << d[i] << ',';
                }
            }
            else
            {
                for (int i = 0; i < d.size(); i++)
                {
                    if (i == d.size() - 1)
                        cout << d[i];
                    else
                        cout << d[i] << ',';
                }
            }
            cout << ']' << '\n';
        }
    }
}
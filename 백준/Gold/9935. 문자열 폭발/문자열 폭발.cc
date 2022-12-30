#include <iostream>
#include <deque>
using namespace std;

int main()
{
    string str, bomb;
    cin >> str >> bomb;

    deque<char> d;
    for (char ch : str)
    {
        d.push_back(ch);

        if (d.size() >= bomb.size())
        {
            string sub;
            for (int i = 0; i < bomb.size(); i++)
            {
                string temp(1, d[d.size() - bomb.size() + i]);
                sub += temp;
            }

            if (sub == bomb)
                for (int i = 0; i < bomb.size(); i++)
                    d.pop_back();
        }
    }

    if (d.size())
        for (char ch : d)
            cout << ch;
    else
        cout << "FRULA";
}
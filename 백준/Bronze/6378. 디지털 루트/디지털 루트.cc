#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string s;
        cin >> s;

        if (s == "0")
        {
            break;
        }

        while (s.size() > 1)
        {
            int sum = 0;
            while (s.size())
            {
                sum += s.back() - '0';
                s.pop_back();
            }
            s = to_string(sum);
        }

        cout << s << endl;
    }
}
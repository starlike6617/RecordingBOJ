#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string res = string(s.size(), 'z');
    for (int i = 0; i < s.size() - 2; i++)
    {
        for (int j = i + 1; j < s.size() - 1; j++)
        {
            string s1 = s.substr(0, i + 1);
            string s2 = s.substr(i + 1, j - i);
            string s3 = s.substr(j + 1, s.size() - j);

            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            reverse(s3.begin(), s3.end());

            string tmp = s1 + s2 + s3;
            res = min(res, tmp);
        }
    }
    cout << res;
}
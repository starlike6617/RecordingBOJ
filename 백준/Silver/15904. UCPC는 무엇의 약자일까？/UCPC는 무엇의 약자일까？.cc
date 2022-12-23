#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string res;
    for (char ch : str)
    {
        if (res.size() == 0 && ch == 'U')
            res.append(1, ch);
        else if (res.size() == 1 && ch == 'C')
            res.append(1, ch);
        else if (res.size() == 2 && ch == 'P')
            res.append(1, ch);
        else if (res.size() == 3 && ch == 'C')
            res.append(1, ch);
    }

    if (res == "UCPC")
        cout << "I love UCPC";
    else
        cout << "I hate UCPC";
}
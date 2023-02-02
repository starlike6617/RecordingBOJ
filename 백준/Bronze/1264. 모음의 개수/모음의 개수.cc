#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        string str;
        getline(cin, str);

        if (str == "#")
            break;

        int cnt = 0;
        for (char ch : str)
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                cnt++;
        cout << cnt << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        char res;
        cin >> res;
        if (res == 'W')
            cnt++;
    }

    if (cnt > 4)
        cout << 1;
    else if (cnt > 2)
        cout << 2;
    else if (cnt > 0)
        cout << 3;
    else
        cout << -1;
}
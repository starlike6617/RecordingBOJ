#include <iostream>
using namespace std;

int main()
{
    string str;
    int N;
    cin >> str >> N;

    int cnt = 0;
    while (N--)
    {
        string ring;
        cin >> ring;

        ring += ring;

        for (int i = 0; i < 10; i++)
            if (str == ring.substr(i, str.size()))
            {
                cnt++;
                break;
            }
    }

    cout << cnt;
}
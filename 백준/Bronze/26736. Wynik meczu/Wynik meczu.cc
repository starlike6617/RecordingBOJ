#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int scoreA = 0, scoreB = 0;
    for (char c : str)
    {
        if (c == 'A')
            scoreA++;
        else
            scoreB++;
    }

    cout << scoreA << " : " << scoreB;
}
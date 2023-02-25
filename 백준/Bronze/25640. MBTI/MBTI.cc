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
        string mbti;
        cin >> mbti;
        if (mbti == str)
            cnt++;
    }

    cout << cnt;
}
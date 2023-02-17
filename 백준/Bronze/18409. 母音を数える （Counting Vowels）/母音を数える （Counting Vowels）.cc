#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    int cnt = 0;
    for (char c : S)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cnt++;

    cout << cnt;
}
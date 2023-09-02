#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;

    if (N == 0)
    {
        cout << 0;
        return 0;
    }

    stack<int> s;
    while (N)
    {
        s.push(N % B);
        N /= B;
    }

    while (!s.empty())
    {
        if (s.top() < 10)
        {
            cout << s.top();
        }
        else
        {
            cout << (char)(s.top() - 10 + 'A');
        }
        s.pop();
    }
}
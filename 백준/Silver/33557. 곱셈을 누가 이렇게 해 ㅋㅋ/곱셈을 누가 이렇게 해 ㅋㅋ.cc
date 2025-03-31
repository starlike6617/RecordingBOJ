#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string A, B;
        cin >> A >> B;

        long long res1 = stoll(A) * stoll(B);

        if (A.size() < B.size())
        {
            swap(A, B);
        }

        string res2 = "";

        res2 += A.substr(0, A.size() - B.size());
        A = A.substr(A.size() - B.size());

        for (int i = 0; i < A.size(); i++)
        {
            res2 += to_string((A[i] - '0') * (B[i] - '0'));
        }

        if (res1 == stoll(res2))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
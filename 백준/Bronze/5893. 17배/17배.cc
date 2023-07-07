#include <iostream>
using namespace std;

int main()
{
    string N;
    cin >> N;

    string M = N + "0000";
    string res = "";
    int carry = 0;

    for (int i = N.size() - 1; i >= 0; i--)
    {
        int sum = (N[i] - '0') + (M[i + 4] - '0') + carry;
        carry = sum / 2;
        res += to_string(sum % 2);
    }

    for (int i = 3; i >= 0; i--)
    {
        int sum = (M[i] - '0') + carry;
        carry = sum / 2;
        res += to_string(sum % 2);
    }

    if (carry)
        res += "1";

    if (res == "00000")
    {
        cout << 0;
        return 0;
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
}
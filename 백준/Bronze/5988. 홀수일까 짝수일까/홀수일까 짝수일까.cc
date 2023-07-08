#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string K;
        cin >> K;

        if (K.back() == '0' || K.back() == '2' || K.back() == '4' || K.back() == '6' || K.back() == '8')
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
}
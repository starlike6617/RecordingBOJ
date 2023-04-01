#include <iostream>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int minSum, maxSum;

    for (int i = 0; i < A.size(); i++)
        if (A[i] == '6')
            A[i] = '5';
    for (int i = 0; i < B.size(); i++)
        if (B[i] == '6')
            B[i] = '5';
    minSum = stoi(A) + stoi(B);

    for (int i = 0; i < A.size(); i++)
        if (A[i] == '5')
            A[i] = '6';
    for (int i = 0; i < B.size(); i++)
        if (B[i] == '5')
            B[i] = '6';
    maxSum = stoi(A) + stoi(B);

    cout << minSum << ' ' << maxSum;
}

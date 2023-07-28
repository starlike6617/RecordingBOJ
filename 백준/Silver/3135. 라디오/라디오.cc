#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int N;
    cin >> N;

    int arr[N];
    int res = abs(A - B);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        res = min(res, abs(arr[i] - B) + 1);
    }

    cout << res;
}
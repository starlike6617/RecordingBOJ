#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int arr[N + 1] = {};
    while (M--)
    {
        int A, B;
        cin >> A >> B;

        arr[A]++;
        arr[B]++;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << '\n';
    }
}
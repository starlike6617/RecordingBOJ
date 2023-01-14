#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int K;
    cin >> K;

    for (int i = 0; i < K; i++)
    {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        sort(arr, arr + N);

        int maxGap = 0;
        for (int i = 1; i < N; i++)
            if (maxGap < abs(arr[i] - arr[i - 1]))
                maxGap = abs(arr[i] - arr[i - 1]);

        cout << "Class " << i + 1 << endl;
        cout << "Max " << arr[N - 1] << ", Min " << arr[0];
        cout << ", Largest gap " << maxGap << endl;
    }
}
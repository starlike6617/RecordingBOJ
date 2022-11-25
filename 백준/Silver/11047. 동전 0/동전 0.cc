#include <iostream>
using namespace std;

int main()
{
  int n, k, cnt = 0;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = n - 1; i >= 0; i--)
  {
    while (arr[i] <= k)
    {
      k -= arr[i];
      cnt++;
    }
  }

  cout << cnt;
}
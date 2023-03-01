#include <iostream>
using namespace std;

int main()
{
  int n, d;
  cin >> n >> d;

  int arr[n], sum = 0;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }

  for (int i = 0; i < n; i++)
    cout << d * arr[i] / sum << endl;
}
#include <iostream>
using namespace std;

int main()
{
  int n, m, a, b;
  scanf("%d %d", &n, &m);

  int arr[n], sum[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  sum[0] = arr[0];
  for (int i = 1; i < n; i++)
    sum[i] = sum[i - 1] + arr[i];
  
  for (int i = 0; i < m; i++)
  {
    scanf("%d %d", &a, &b);
    printf("%d\n", sum[b - 1] - sum[a - 2]);
  }
}
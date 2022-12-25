#include <iostream>
using namespace std;

int cnt;

int func(int a)
{
  if (a < 10)
    return a;
  
  int total = 0;
  cnt++;
  while (a)
    {
      total += a % 10;
      a /= 10;
    }
  return func(total);
}

int main()
{
  string n;
  cin >> n;

  if (n.size() > 1)
    cnt++;

  int sum = 0;
  while (n.size())
    {
      sum += n.back() - '0';
      n.pop_back();
    }

  int res = func(sum);
  cout << cnt << endl;
  cout << (res % 3 == 0 ? "YES" : "NO");
}
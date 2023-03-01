#include <iostream>
using namespace std;

int main()
{
  int A, B, C, D, res;
  cin >> A >> B >> C >> D;
  res = A + D - B - C;
  cout << (res > 0 ? res : -res);
}
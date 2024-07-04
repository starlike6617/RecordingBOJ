#include <iostream>
using namespace std;
int main() {
	/*
	0! = 1
	1! = 1
	2! = 2
	3! = 6
	4! = 24 -> 6
	5! = 120 -> 3
	6! = 720 -> 9
	7! = 5040 -> 9
	8! = 40320 -> 9
	9! = 362880 -> 27 -> 9
	10! = 3628800 -> 27 -> 9
	*/
	
	int N;
	cin >> N;
	
	if (N == 0 || N == 1)
		cout << 1;
	else if (N == 2)
		cout << 2;
	else if (N == 3 || N == 4)
		cout << 6;
	else if (N == 5)
		cout << 3;
	else
		cout << 9;
}
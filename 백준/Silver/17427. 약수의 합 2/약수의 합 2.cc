#include <stdio.h>

int main()
{
	long long n, x = 0;
	scanf("%lld", &n);
	for (long long i = 1; i <= n; i++)
		x += i * (n / i);
	printf("%lld", x);
}
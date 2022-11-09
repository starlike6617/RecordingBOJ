#include <stdio.h>

void bi(int x)
{
	if (x == 0)
		return;

	if (x % -2 == 0)
	{
		bi(x / -2);
		printf("0");
	}
	else
	{
		bi((x - 1) / -2);
		printf("1");
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	if (n == 0)
		printf("0");

	bi(n);
}
#include <stdio.h>

typedef struct
{
	int x;
	int y;
} FRACTION;

int getGCD(int a, int b)
{
	int gcd = a < b ? a : b;
	while (a % gcd != 0 || b % gcd != 0)
		gcd--;
	return gcd;
}

int main()
{
	FRACTION a, b, c;
	scanf("%d %d\n%d %d", &a.x, &a.y, &b.x, &b.y);

	c.x = a.x * b.y + a.y * b.x;
	c.y = a.y * b.y;

	int cGCD = getGCD(c.x, c.y);

	printf("%d %d", c.x / cGCD, c.y / cGCD);

	return 0;
}
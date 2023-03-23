#include <stdio.h>

int main()
{
	int n, m, sum = 0;
	char str[100];
	scanf("%d\n%s", &n, str);
	for (int i = 0; i < n; i++)
		sum += (str[i] - '0');
	printf("%d", sum);
	return 0;
}
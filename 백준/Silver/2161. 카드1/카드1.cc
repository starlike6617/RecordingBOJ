#include <stdio.h>

int n, m = 0, arr1[1000], arr2[1000];

void func()
{
	arr2[m] = arr1[0];
	if (n > 1)
	{
		for (int i = 0; i < n - 1; i++)
			arr1[i] = arr1[i + 1];
		arr1[n - 1] = '/0';
		int temp = arr1[0];
		for (int i = 0; i < n - 2; i++)
			arr1[i] = arr1[i + 1];
		arr1[n - 2] = temp;
	}
	n--;
	m++;
}

int main()
{
	scanf("%d", &n);
	int size = n;
	for (int i = 0; i < n; i++)
		arr1[i] = i + 1;
	while (n != 0)
		func();
	for (int i = 0; i < size; i++)
		printf("%d ", arr2[i]);
	return 0;
}